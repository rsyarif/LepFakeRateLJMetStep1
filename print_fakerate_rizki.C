{
  TFile *f = TFile::Open("fakerate_rizki_v1.root");
  TH1D *h;
  float num;
  float denom;
  float error;
  TString var = "NLooseTight";
  std::vector<TString> flav;
  flav.push_back("El");
  flav.push_back("Mu");
  std::vector<TString> pt;
  pt.push_back("");
  pt.push_back("_pt25_35");
  pt.push_back("_pt35_50");
  pt.push_back("_pt50_75");
  pt.push_back("_pt75_100");
  pt.push_back("_pt100_Inf");

  for(int j=0;j<flav.size();j++){
    for(int i=0;i<pt.size();i++){
      h = (TH1D*) f->Get(var+flav.at(j)+pt.at(i));
      num = h->GetBinContent(2);
      denom =  h->GetBinContent(1);
      error = num/denom * sqrt(1./num + 1./denom);
      std::cout << flav.at(j)+pt.at(i) <<" fake rate = " << num / denom *100 << "% +/- " << error*100 << " %" << endl;
    }
  }

  for(k=0;k<flav.size();k++){

    TString dir = "plots/";
    TString numVar = "Tight"+flav.at(k)+"_pt";
    TString denomVar = "LooseTight"+flav.at(k)+"_pt";

    TH1D *hnum = (TH1D*) f->Get(numVar);
    TH1D *hdenom = (TH1D*) f->Get(denomVar);
    //  std::cout <<"Check " <<hdenom << endl;
    TH1D *hratio;
    hratio = (TH1D*) hnum->Clone("hratio");
    //  std::cout <<"Check " <<hratio << endl;
    hratio->Divide(hdenom);
    std::cout <<"Check " <<hratio << endl;

    TCanvas *c1 = new TCanvas();
    c1->cd();
    hnum->Draw();
    c1->SaveAs(dir+numVar+".pdf");

    TCanvas *c2 = new TCanvas();
    c2->cd();
    hdenom->Draw();
    c2->SaveAs(dir+denomVar+".pdf");

    TCanvas *c3 = new TCanvas();
    c3->cd();
    hratio->Draw("E1");
    c3->SaveAs(dir+"hratio_"+flav.at(k)+".pdf");

  }
}
