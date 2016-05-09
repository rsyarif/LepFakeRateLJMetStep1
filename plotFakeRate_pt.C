void plotFakeRate_pt(){

  TFile *f1= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/DYJetsToLL_M-50_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_hadd.root"); 
  TFile *f2= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/QCD_HT100to200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *f3= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/QCD_HT200to300_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *f4= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/QCD_HT300to500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *f5= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/QCD_HT500to700_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *f6= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/QCD_HT700to1000_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *f7= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/QCD_HT1000to1500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *f8= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/QCD_HT1500to2000_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");

  TFile *g1= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/WJetsToLNu_HT-100To200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *g2= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/WJetsToLNu_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *g3= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *g4= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *g5= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *g6= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");
  TFile *g7= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8_hadd.root");

  TFile *h1= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds/nominal/DoubleMuon_Run2015C_16Dec2015_hadd.root");
  TFile *h2= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds/nominal/DoubleMuon_Run2015D_16Dec2015_hadd.root");
  TFile *h3= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds/nominal/DoubleEG_Run2015C_16Dec2015_hadd.root");
  TFile *h4= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds/nominal/DoubleEG_Run2015D_16Dec2015_hadd.root");

  TFile *h5= TFile::Open("root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest_step1PtEtahadds_rizki/nominal/TT_TuneCUETP8M1_13TeV-powheg-pythia8_hadd.root");

  /*
   NTotalSLPassed = new TH1D("NTotalSLPassed","",3,0,3);
   NLooseTightEl = new TH1D("NLooseTightEl","",2,0,2);
   NLooseTightMu = new TH1D("NLooseTightMu","",2,0,2);
   NLooseEl_Pt = new TH1D("NLooseEl_Pt","",5,ptbins);
   NLooseMu_Pt = new TH1D("NLooseMu_Pt","",5,ptbins);
   NLooseEl_Eta = new TH1D("NLooseEl_Eta","",4,etabinsEl);
   NLooseMu_Eta = new TH1D("NLooseMu_Eta","",4,etabinsMu);
   NLooseEl_PtEta = new TH2D("NLooseEl_PtEta","",5,ptbins,4,etabinsEl);
   NLooseMu_PtEta = new TH2D("NLooseMu_PtEta","",5,ptbins,4,etabinsMu);
   NTightEl_Pt = new TH1D("NTightEl_Pt","",5,ptbins);
   NTightMu_Pt = new TH1D("NTightMu_Pt","",5,ptbins);
   NTightEl_Eta = new TH1D("NTightEl_Eta","",4,etabinsEl);
   NTightMu_Eta = new TH1D("NTightMu_Eta","",4,etabinsMu);
   NTightEl_PtEta = new TH2D("NTightEl_PtEta","",5,ptbins,4,etabinsEl);
   NTightMu_PtEta = new TH2D("NTightMu_PtEta","",5,ptbins,4,etabinsMu);
  */

  TH1D *NLEl_DY = (TH1D*)f1->Get("NLooseEl_Pt");
  TH1D *NLMu_DY = (TH1D*)f1->Get("NLooseMu_Pt");
  TH1D *NTEl_DY = (TH1D*)f1->Get("NTightEl_Pt");
  TH1D *NTMu_DY = (TH1D*)f1->Get("NTightMu_Pt");

  TH1D *NLEl_WJ100 = (TH1D*)g1->Get("NLooseEl_Pt");
  TH1D *NLMu_WJ100 = (TH1D*)g1->Get("NLooseMu_Pt");
  TH1D *NTEl_WJ100 = (TH1D*)g1->Get("NTightEl_Pt");
  TH1D *NTMu_WJ100 = (TH1D*)g1->Get("NTightMu_Pt");
  TH1D *NLEl_WJ200 = (TH1D*)g2->Get("NLooseEl_Pt");
  TH1D *NLMu_WJ200 = (TH1D*)g2->Get("NLooseMu_Pt");
  TH1D *NTEl_WJ200 = (TH1D*)g2->Get("NTightEl_Pt");
  TH1D *NTMu_WJ200 = (TH1D*)g2->Get("NTightMu_Pt");
  TH1D *NLEl_WJ400 = (TH1D*)g3->Get("NLooseEl_Pt");
  TH1D *NLMu_WJ400 = (TH1D*)g3->Get("NLooseMu_Pt");
  TH1D *NTEl_WJ400 = (TH1D*)g3->Get("NTightEl_Pt");
  TH1D *NTMu_WJ400 = (TH1D*)g3->Get("NTightMu_Pt");
  TH1D *NLEl_WJ600 = (TH1D*)g4->Get("NLooseEl_Pt");
  TH1D *NLMu_WJ600 = (TH1D*)g4->Get("NLooseMu_Pt");
  TH1D *NTEl_WJ600 = (TH1D*)g4->Get("NTightEl_Pt");
  TH1D *NTMu_WJ600 = (TH1D*)g4->Get("NTightMu_Pt");
  TH1D *NLEl_WJ800 = (TH1D*)g5->Get("NLooseEl_Pt");
  TH1D *NLMu_WJ800 = (TH1D*)g5->Get("NLooseMu_Pt");
  TH1D *NTEl_WJ800 = (TH1D*)g5->Get("NTightEl_Pt");
  TH1D *NTMu_WJ800 = (TH1D*)g5->Get("NTightMu_Pt");
  TH1D *NLEl_WJ1200 = (TH1D*)g6->Get("NLooseEl_Pt");
  TH1D *NLMu_WJ1200 = (TH1D*)g6->Get("NLooseMu_Pt");
  TH1D *NTEl_WJ1200 = (TH1D*)g6->Get("NTightEl_Pt");
  TH1D *NTMu_WJ1200 = (TH1D*)g6->Get("NTightMu_Pt");
  TH1D *NLEl_WJ2500 = (TH1D*)g7->Get("NLooseEl_Pt");
  TH1D *NLMu_WJ2500 = (TH1D*)g7->Get("NLooseMu_Pt");
  TH1D *NTEl_WJ2500 = (TH1D*)g7->Get("NTightEl_Pt");
  TH1D *NTMu_WJ2500 = (TH1D*)g7->Get("NTightMu_Pt");

  TH1D *NLEl_QCD100 = (TH1D*)f2->Get("NLooseEl_Pt");
  TH1D *NLMu_QCD100 = (TH1D*)f2->Get("NLooseMu_Pt");
  TH1D *NTEl_QCD100 = (TH1D*)f2->Get("NTightEl_Pt");
  TH1D *NTMu_QCD100 = (TH1D*)f2->Get("NTightMu_Pt");
  TH1D *NLEl_QCD200 = (TH1D*)f3->Get("NLooseEl_Pt");
  TH1D *NLMu_QCD200 = (TH1D*)f3->Get("NLooseMu_Pt");
  TH1D *NTEl_QCD200 = (TH1D*)f3->Get("NTightEl_Pt");
  TH1D *NTMu_QCD200 = (TH1D*)f3->Get("NTightMu_Pt");
  TH1D *NLEl_QCD300 = (TH1D*)f4->Get("NLooseEl_Pt");
  TH1D *NLMu_QCD300 = (TH1D*)f4->Get("NLooseMu_Pt");
  TH1D *NTEl_QCD300 = (TH1D*)f4->Get("NTightEl_Pt");
  TH1D *NTMu_QCD300 = (TH1D*)f4->Get("NTightMu_Pt");
  TH1D *NLEl_QCD500 = (TH1D*)f5->Get("NLooseEl_Pt");
  TH1D *NLMu_QCD500 = (TH1D*)f5->Get("NLooseMu_Pt");
  TH1D *NTEl_QCD500 = (TH1D*)f5->Get("NTightEl_Pt");
  TH1D *NTMu_QCD500 = (TH1D*)f5->Get("NTightMu_Pt");
  TH1D *NLEl_QCD700 = (TH1D*)f6->Get("NLooseEl_Pt");
  TH1D *NLMu_QCD700 = (TH1D*)f6->Get("NLooseMu_Pt");
  TH1D *NTEl_QCD700 = (TH1D*)f6->Get("NTightEl_Pt");
  TH1D *NTMu_QCD700 = (TH1D*)f6->Get("NTightMu_Pt");
  TH1D *NLEl_QCD1000 = (TH1D*)f7->Get("NLooseEl_Pt");
  TH1D *NLMu_QCD1000 = (TH1D*)f7->Get("NLooseMu_Pt");
  TH1D *NTEl_QCD1000 = (TH1D*)f7->Get("NTightEl_Pt");
  TH1D *NTMu_QCD1000 = (TH1D*)f7->Get("NTightMu_Pt");
  TH1D *NLEl_QCD1500 = (TH1D*)f8->Get("NLooseEl_Pt");
  TH1D *NLMu_QCD1500 = (TH1D*)f8->Get("NLooseMu_Pt");
  TH1D *NTEl_QCD1500 = (TH1D*)f8->Get("NTightEl_Pt");
  TH1D *NTMu_QCD1500 = (TH1D*)f8->Get("NTightMu_Pt");

  TH1D *NLEl_DMC = (TH1D*)h1->Get("NLooseEl_Pt");
  TH1D *NLMu_DMC = (TH1D*)h1->Get("NLooseMu_Pt");
  TH1D *NTEl_DMC = (TH1D*)h1->Get("NTightEl_Pt");
  TH1D *NTMu_DMC = (TH1D*)h1->Get("NTightMu_Pt");
  TH1D *NLEl_DMD = (TH1D*)h2->Get("NLooseEl_Pt");
  TH1D *NLMu_DMD = (TH1D*)h2->Get("NLooseMu_Pt");
  TH1D *NTEl_DMD = (TH1D*)h2->Get("NTightEl_Pt");
  TH1D *NTMu_DMD = (TH1D*)h2->Get("NTightMu_Pt");
  TH1D *NLEl_DEC = (TH1D*)h3->Get("NLooseEl_Pt");
  TH1D *NLMu_DEC = (TH1D*)h3->Get("NLooseMu_Pt");
  TH1D *NTEl_DEC = (TH1D*)h3->Get("NTightEl_Pt");
  TH1D *NTMu_DEC = (TH1D*)h3->Get("NTightMu_Pt");
  TH1D *NLEl_DED = (TH1D*)h4->Get("NLooseEl_Pt");
  TH1D *NLMu_DED = (TH1D*)h4->Get("NLooseMu_Pt");
  TH1D *NTEl_DED = (TH1D*)h4->Get("NTightEl_Pt");
  TH1D *NTMu_DED = (TH1D*)h4->Get("NTightMu_Pt");

  TH1D *NLEl_TT = (TH1D*)h5->Get("NLooseEl_Pt");
  TH1D *NLMu_TT = (TH1D*)h5->Get("NLooseMu_Pt");
  TH1D *NTEl_TT = (TH1D*)h5->Get("NTightEl_Pt");
  TH1D *NTMu_TT = (TH1D*)h5->Get("NTightMu_Pt");
  
  double scale_WJ100 = 201.4*1345.0*1.21/10205377.;
  double scale_WJ200 = 201.4*359.7*1.21/4949568.;
  double scale_WJ400 = 201.4*48.91*1.21/1943664.;
  double scale_WJ600 = 201.4*12.05*1.21/3767766.;
  double scale_WJ800 = 201.4*5.501*1.21/1568277.;
  double scale_WJ1200 = 201.4*1.329*1.21/246239.;
  double scale_WJ2500 = 201.4*0.03216*1.21/251982.;

  double scale_QCD100 = 201.4*27990000.0/82095800.;
  double scale_QCD200 = 201.4*1712000.0/18784379.;
  double scale_QCD300 = 201.4*347700.0/16909004.;
  double scale_QCD500 = 201.4*32100.0/19665695.;
  double scale_QCD700 = 201.4*6831.0/15547962.;
  double scale_QCD1000 = 201.4*1207.0/5049267.;
  double scale_QCD1500 = 201.4*119.9/3939077.;

  double scale_DY = 201.4*6025.2/81236727.;
  double scale_TT = 201.4*831.76/97994442;

  double ElCoeff = 46.8/201.4;

  NTEl_WJ100->Scale(ElCoeff*scale_WJ100);    NTMu_WJ100->Scale(scale_WJ100);  
  NTEl_WJ200->Scale(ElCoeff*scale_WJ200);    NTMu_WJ200->Scale(scale_WJ200);  
  NTEl_WJ400->Scale(ElCoeff*scale_WJ400);    NTMu_WJ400->Scale(scale_WJ400);  
  NTEl_WJ600->Scale(ElCoeff*scale_WJ600);    NTMu_WJ600->Scale(scale_WJ600);  
  NTEl_WJ800->Scale(ElCoeff*scale_WJ800);    NTMu_WJ800->Scale(scale_WJ800);  
  NTEl_WJ1200->Scale(ElCoeff*scale_WJ1200);  NTMu_WJ1200->Scale(scale_WJ1200);
  NTEl_WJ2500->Scale(ElCoeff*scale_WJ2500);  NTMu_WJ2500->Scale(scale_WJ2500);

  NLEl_WJ100->Scale(ElCoeff*scale_WJ100);    NLMu_WJ100->Scale(scale_WJ100);  
  NLEl_WJ200->Scale(ElCoeff*scale_WJ200);    NLMu_WJ200->Scale(scale_WJ200);  
  NLEl_WJ400->Scale(ElCoeff*scale_WJ400);    NLMu_WJ400->Scale(scale_WJ400);  
  NLEl_WJ600->Scale(ElCoeff*scale_WJ600);    NLMu_WJ600->Scale(scale_WJ600);  
  NLEl_WJ800->Scale(ElCoeff*scale_WJ800);    NLMu_WJ800->Scale(scale_WJ800);  
  NLEl_WJ1200->Scale(ElCoeff*scale_WJ1200);  NLMu_WJ1200->Scale(scale_WJ1200);
  NLEl_WJ2500->Scale(ElCoeff*scale_WJ2500);  NLMu_WJ2500->Scale(scale_WJ2500);
  
  NTEl_QCD100->Scale(ElCoeff*scale_QCD100);    NTMu_QCD100->Scale(scale_QCD100);  
  NTEl_QCD200->Scale(ElCoeff*scale_QCD200);    NTMu_QCD200->Scale(scale_QCD200);  
  NTEl_QCD300->Scale(ElCoeff*scale_QCD300);    NTMu_QCD300->Scale(scale_QCD300);  
  NTEl_QCD500->Scale(ElCoeff*scale_QCD500);    NTMu_QCD500->Scale(scale_QCD500);  
  NTEl_QCD700->Scale(ElCoeff*scale_QCD700);    NTMu_QCD700->Scale(scale_QCD700);  
  NTEl_QCD1000->Scale(ElCoeff*scale_QCD1000);  NTMu_QCD1000->Scale(scale_QCD1000);
  NTEl_QCD1500->Scale(ElCoeff*scale_QCD1500);  NTMu_QCD1500->Scale(scale_QCD1500);

  NLEl_QCD100->Scale(ElCoeff*scale_QCD100);    NLMu_QCD100->Scale(scale_QCD100);  
  NLEl_QCD200->Scale(ElCoeff*scale_QCD200);    NLMu_QCD200->Scale(scale_QCD200);  
  NLEl_QCD300->Scale(ElCoeff*scale_QCD300);    NLMu_QCD300->Scale(scale_QCD300);  
  NLEl_QCD500->Scale(ElCoeff*scale_QCD500);    NLMu_QCD500->Scale(scale_QCD500);  
  NLEl_QCD700->Scale(ElCoeff*scale_QCD700);    NLMu_QCD700->Scale(scale_QCD700);  
  NLEl_QCD1000->Scale(ElCoeff*scale_QCD1000);  NLMu_QCD1000->Scale(scale_QCD1000);
  NLEl_QCD1500->Scale(ElCoeff*scale_QCD1500);  NLMu_QCD1500->Scale(scale_QCD1500);
  
  NTEl_DY->Scale(ElCoeff*scale_DY);    NTEl_TT->Scale(ElCoeff*scale_TT);
  NLEl_DY->Scale(ElCoeff*scale_DY);    NLEl_TT->Scale(ElCoeff*scale_TT);
  NTMu_DY->Scale(scale_DY);    NTMu_TT->Scale(scale_TT);
  NLMu_DY->Scale(scale_DY);    NLMu_TT->Scale(scale_TT);

  NTEl_WJ100->Add(NTEl_WJ200);   NTMu_WJ100->Add(NTMu_WJ200); 
  NTEl_WJ100->Add(NTEl_WJ400);   NTMu_WJ100->Add(NTMu_WJ400); 
  NTEl_WJ100->Add(NTEl_WJ600);   NTMu_WJ100->Add(NTMu_WJ600); 
  NTEl_WJ100->Add(NTEl_WJ800);   NTMu_WJ100->Add(NTMu_WJ800); 
  NTEl_WJ100->Add(NTEl_WJ1200);  NTMu_WJ100->Add(NTMu_WJ1200);
  NTEl_WJ100->Add(NTEl_WJ2500);  NTMu_WJ100->Add(NTMu_WJ2500);

  NLEl_WJ100->Add(NLEl_WJ200);   NLMu_WJ100->Add(NLMu_WJ200); 
  NLEl_WJ100->Add(NLEl_WJ400);   NLMu_WJ100->Add(NLMu_WJ400); 
  NLEl_WJ100->Add(NLEl_WJ600);   NLMu_WJ100->Add(NLMu_WJ600); 
  NLEl_WJ100->Add(NLEl_WJ800);   NLMu_WJ100->Add(NLMu_WJ800); 
  NLEl_WJ100->Add(NLEl_WJ1200);  NLMu_WJ100->Add(NLMu_WJ1200);
  NLEl_WJ100->Add(NLEl_WJ2500);  NLMu_WJ100->Add(NLMu_WJ2500);

  NTEl_QCD100->Add(NTEl_QCD200);   NTMu_QCD100->Add(NTMu_QCD200); 
  NTEl_QCD100->Add(NTEl_QCD300);   NTMu_QCD100->Add(NTMu_QCD300); 
  NTEl_QCD100->Add(NTEl_QCD500);   NTMu_QCD100->Add(NTMu_QCD500); 
  NTEl_QCD100->Add(NTEl_QCD700);   NTMu_QCD100->Add(NTMu_QCD700); 
  NTEl_QCD100->Add(NTEl_QCD1000);  NTMu_QCD100->Add(NTMu_QCD1000);
  NTEl_QCD100->Add(NTEl_QCD1500);  NTMu_QCD100->Add(NTMu_QCD1500);

  NLEl_QCD100->Add(NLEl_QCD200);   NLMu_QCD100->Add(NLMu_QCD200); 
  NLEl_QCD100->Add(NLEl_QCD300);   NLMu_QCD100->Add(NLMu_QCD300); 
  NLEl_QCD100->Add(NLEl_QCD500);   NLMu_QCD100->Add(NLMu_QCD500); 
  NLEl_QCD100->Add(NLEl_QCD700);   NLMu_QCD100->Add(NLMu_QCD700); 
  NLEl_QCD100->Add(NLEl_QCD1000);  NLMu_QCD100->Add(NLMu_QCD1000);
  NLEl_QCD100->Add(NLEl_QCD1500);  NLMu_QCD100->Add(NLMu_QCD1500);

  NTEl_DEC->Add(NTEl_DED);  NTMu_DEC->Add(NTMu_DED);
  NTEl_DEC->Add(NTEl_DMC);  NTMu_DEC->Add(NTMu_DMC);
  NTEl_DEC->Add(NTEl_DMD);  NTMu_DEC->Add(NTMu_DMD);

  NLEl_DEC->Add(NLEl_DED);  NLMu_DEC->Add(NLMu_DED);
  NLEl_DEC->Add(NLEl_DMC);  NLMu_DEC->Add(NLMu_DMC);
  NLEl_DEC->Add(NLEl_DMD);  NLMu_DEC->Add(NLMu_DMD);

  TH1D *NREl_WJ100 = (TH1D*)NTEl_WJ100->Clone("NREl_WJ100");
  TH1D *NRMu_WJ100 = (TH1D*)NTMu_WJ100->Clone("NRMu_WJ100");
  TH1D *NREl_QCD100 = (TH1D*)NTEl_QCD100->Clone("NREl_QCD100");
  TH1D *NRMu_QCD100 = (TH1D*)NTMu_QCD100->Clone("NRMu_QCD100");
  TH1D *NREl_DY = (TH1D*)NTEl_DY->Clone("NREl_DY");
  TH1D *NRMu_DY = (TH1D*)NTMu_DY->Clone("NRMu_DY");
  TH1D *NREl_TT = (TH1D*)NTEl_TT->Clone("NREl_TT");
  TH1D *NRMu_TT = (TH1D*)NTMu_TT->Clone("NRMu_TT");
  TH1D *NREl_DEC = (TH1D*)NTEl_DEC->Clone("NREl_DEC");
  TH1D *NRMu_DEC = (TH1D*)NTMu_DEC->Clone("NRMu_DEC");

  NREl_WJ100->Divide(NLEl_WJ100);    NRMu_WJ100->Divide(NLMu_WJ100);  
  NREl_QCD100->Divide(NLEl_QCD100);  NRMu_QCD100->Divide(NLMu_QCD100);
  NREl_DY->Divide(NLEl_DY);       NRMu_DY->Divide(NLMu_DY);	   
  NREl_TT->Divide(NLEl_TT);       NRMu_TT->Divide(NLMu_TT);	   
  NREl_DEC->Divide(NLEl_DEC);    NRMu_DEC->Divide(NLMu_DEC);      

  TCanvas *c1 = new TCanvas("c1","c1",800,600);
  gStyle->SetPalette(1);

  NREl_WJ100->Draw("colz");  
  c1->SaveAs("FakeRatePlots/FakeRate_WJets_El_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_WJets_El_Pt.png");

  NRMu_WJ100->Draw("colz");
  c1->SaveAs("FakeRatePlots/FakeRate_WJets_Mu_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_WJets_Mu_Pt.png");

  NREl_QCD100->Draw("colz");  
  c1->SaveAs("FakeRatePlots/FakeRate_QCD_El_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_QCD_El_Pt.png");

  NRMu_QCD100->Draw("colz");
  c1->SaveAs("FakeRatePlots/FakeRate_QCD_Mu_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_QCD_Mu_Pt.png");

  NREl_DY->Draw("colz");  
  c1->SaveAs("FakeRatePlots/FakeRate_DY_El_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_DY_El_Pt.png");

  NRMu_DY->Draw("colz");
  c1->SaveAs("FakeRatePlots/FakeRate_DY_Mu_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_DY_Mu_Pt.png");

  NREl_TT->Draw("colz");  
  c1->SaveAs("FakeRatePlots/FakeRate_TT_El_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_TT_El_Pt.png");

  NRMu_TT->Draw("colz");
  c1->SaveAs("FakeRatePlots/FakeRate_TT_Mu_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_TT_Mu_Pt.png");

  NREl_DEC->Draw("colz");  
  c1->SaveAs("FakeRatePlots/FakeRate_Data_El_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_Data_El_Pt.png");

  NRMu_DEC->Draw("colz");
  c1->SaveAs("FakeRatePlots/FakeRate_Data_Mu_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_Data_Mu_Pt.png");

  TH1D *newtightEl = (TH1D*)NTEl_DEC->Clone("newtightEl");
  TH1D *newlooseEl = (TH1D*)NLEl_DEC->Clone("newlooseEl");
  newtightEl->Add(NTEl_WJ100,-1);
  newtightEl->Add(NTEl_DY,-1);
  newtightEl->Add(NTEl_TT,-1);
  //  newlooseEl->Add(NLEl_WJ100,-1);
  //  newlooseEl->Add(NLEl_DY,-1);
  //  newlooseEl->Add(NLEl_TT,-1);
  TH1D *newratioEl = (TH1D*)newtightEl->Clone("newratioEl");
  newratioEl->Divide(newlooseEl);

  TH1D *newtightMu = (TH1D*)NTMu_DEC->Clone("newtightMu");
  TH1D *newlooseMu = (TH1D*)NLMu_DEC->Clone("newlooseMu");
  newtightMu->Add(NTMu_WJ100,-1);
  newtightMu->Add(NTMu_DY,-1);
  newtightMu->Add(NTMu_TT,-1);
  //  newlooseMu->Add(NLMu_WJ100,-1);
  //  newlooseMu->Add(NLMu_DY,-1);
  //  newlooseMu->Add(NLMu_TT,-1);
  TH1D *newratioMu = (TH1D*)newtightMu->Clone("newratioMu");
  newratioMu->Divide(newlooseMu);
  
  TH1D *ratio_QCDdata_el = (TH1D*)newratioEl->Clone("ratio_QCDdata_el");
  ratio_QCDdata_el->Divide(NREl_QCD100);

  TH1D *ratio_QCDdata_mu = (TH1D*)newratioMu->Clone("ratio_QCDdata_mu");
  ratio_QCDdata_mu->Divide(NRMu_QCD100);

  newratioEl->Draw("colz");  
  c1->SaveAs("FakeRatePlots/FakeRate_Data_subtr_El_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_Data_subtr_El_Pt.png");

  newratioMu->Draw("colz");
  c1->SaveAs("FakeRatePlots/FakeRate_Data_subtr_Mu_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_Data_subtr_Mu_Pt.png");

  ratio_QCDdata_el->Draw();
  c1->SaveAs("FakeRatePlots/FakeRate_ratio_QCDData_subtr_El_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_ratio_QCDData_subtr_El_Pt.png");

  ratio_QCDdata_mu->Draw();
  c1->SaveAs("FakeRatePlots/FakeRate_ratio_QCDData_subtr_Mu_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_ratio_QCDData_subtr_Mu_Pt.png");

  NREl_TT->GetYaxis()->SetRangeUser(0,1);
  NREl_TT->SetLineColor(kBlue);
  NREl_WJ100->SetLineColor(kGreen);
  NREl_DY->SetLineColor(kViolet);
  NREl_QCD100->SetLineColor(kRed);
  NREl_DEC->SetLineColor(kBlack);
  newratioEl->SetLineColor(kBlack);
  newratioEl->SetLineStyle(5);
  
  leg_El = new TLegend(0.9-0.38,0.1,0.9,0.1+0.2);
  leg_El->AddEntry(NREl_TT,"top","lep");
  leg_El->AddEntry(NREl_WJ100,"W","lep");
  leg_El->AddEntry(NREl_DY,"DY","lep");
  leg_El->AddEntry(NREl_QCD100,"QCD","lep");
  leg_El->AddEntry(NREl_DEC,"Data","lep");
  leg_El->AddEntry(newratioEl,"Data (subtracted)","lep");

  NREl_TT->Draw();
  NREl_WJ100->Draw("same");
  NREl_DY->Draw("same");
  NREl_QCD100->Draw("same");
  NREl_DEC->Draw("same");
  newratioEl->Draw("same");
  leg_El->Draw("same");
  c1->SaveAs("FakeRatePlots/FakeRate_All_El_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_All_El_Pt.png");

  NRMu_TT->GetYaxis()->SetRangeUser(0,1);
  NRMu_TT->SetLineColor(kBlue);
  NRMu_WJ100->SetLineColor(kGreen);
  NRMu_DY->SetLineColor(kViolet);
  NRMu_QCD100->SetLineColor(kRed);
  NRMu_DEC->SetLineColor(kBlack);
  newratioMu->SetLineColor(kBlack);
  newratioMu->SetLineStyle(5);

  leg_Mu = new TLegend(0.9-0.38,0.1,0.9,0.1+0.2);
  leg_Mu->AddEntry(NREl_TT,"top","lep");
  leg_Mu->AddEntry(NREl_WJ100,"W","lep");
  leg_Mu->AddEntry(NREl_DY,"DY","lep");
  leg_Mu->AddEntry(NREl_QCD100,"QCD","lep");
  leg_Mu->AddEntry(NREl_DEC,"Data","lep");
  leg_Mu->AddEntry(newratioEl,"Data (subtracted)","lep");

  NRMu_TT->Draw();
  NRMu_WJ100->Draw("same");
  NRMu_DY->Draw("same");
  NRMu_QCD100->Draw("same");
  NRMu_DEC->Draw("same");
  newratioMu->Draw("same");
  leg_Mu->Draw("same");
  c1->SaveAs("FakeRatePlots/FakeRate_All_Mu_Pt.C");
  c1->SaveAs("FakeRatePlots/FakeRate_All_Mu_Pt.png");

  for(int i = 1; i < NREl_WJ100->GetNbinsX()+1; i++){
    for(int j = 1; j < NREl_WJ100->GetNbinsY()+1; j++){
      cout << "---------------------------------------------------------------" << endl;
      cout << "Pt = " << NREl_WJ100->GetXaxis()->GetBinLowEdge(i) << " - " 
	   << NREl_WJ100->GetXaxis()->GetBinLowEdge(i+1) << ", Eta = " 
	   << NREl_WJ100->GetYaxis()->GetBinLowEdge(j) << " - " 
	   << NREl_WJ100->GetYaxis()->GetBinLowEdge(j+1) << endl;    

      cout << "WJets El: FR = " << NREl_WJ100->GetBinContent(i,j) << " +/- " 
	   << NREl_WJ100->GetBinError(i,j) << ", NT = " << NTEl_WJ100->GetBinContent(i,j) 
	   << ", NL = " << NLEl_WJ100->GetBinContent(i,j) << endl;

      cout << "DY El: FR = " << NREl_DY->GetBinContent(i,j) << " +/- " << NREl_DY->GetBinError(i,j) 
	   << ", NT = " << NTEl_DY->GetBinContent(i,j) 
	   << ", NL = " << NLEl_DY->GetBinContent(i,j)<< endl;

      cout << "TT El: FR = " << NREl_TT->GetBinContent(i,j) << " +/- " << NREl_TT->GetBinError(i,j) 
	   << ", NT = " << NTEl_TT->GetBinContent(i,j) 
	   << ", NL = " << NLEl_TT->GetBinContent(i,j)<< endl;

      cout << "QCD El: FR = " 
	   << NREl_QCD100->GetBinContent(i,j) << " +/- " << NREl_QCD100->GetBinError(i,j)
	   << ", NT = " << NTEl_QCD100->GetBinContent(i,j) 
	   << ", NL = " << NLEl_QCD100->GetBinContent(i,j)<< endl;

      cout << "Data El: FR = " 
	   << NREl_DEC->GetBinContent(i,j) << " +/- " << NREl_DEC->GetBinError(i,j)
	   << ", NT = " << NTEl_DEC->GetBinContent(i,j) 
	   << ", NL = " << NLEl_DEC->GetBinContent(i,j)<< endl;

      cout << "Data El W/Z/T subtracted: FR = " << newratioEl->GetBinContent(i,j) << " +/- " << newratioEl->GetBinError(i,j)
	   << ", NT = " << newtightEl->GetBinContent(i,j) << ", NL = " << newlooseEl->GetBinContent(i,j) << endl;
      
    }
  }

  for(int i = 1; i < NRMu_WJ100->GetNbinsX()+1; i++){
    for(int j = 1; j < NRMu_WJ100->GetNbinsY()+1; j++){
      cout << "---------------------------------------------------------------" << endl;
      cout << "Pt = " << NRMu_WJ100->GetXaxis()->GetBinLowEdge(i) << " - " 
	   << NRMu_WJ100->GetXaxis()->GetBinLowEdge(i+1) << ", Eta = " 
	   << NRMu_WJ100->GetYaxis()->GetBinLowEdge(j) << " - " 
	   << NRMu_WJ100->GetYaxis()->GetBinLowEdge(j+1) << endl;
      cout << "WJets Mu: FR = " << NRMu_WJ100->GetBinContent(i,j) << " +/- " 
	   << NRMu_WJ100->GetBinError(i,j) << ", NT = " << NTMu_WJ100->GetBinContent(i,j) 
	   << ", NL = " << NLMu_WJ100->GetBinContent(i,j) << endl;

      cout << "DY Mu: FR = " << NRMu_DY->GetBinContent(i,j) << " +/- " << NRMu_DY->GetBinError(i,j) 
	   << ", NT = " << NTMu_DY->GetBinContent(i,j) 
	   << ", NL = " << NLMu_DY->GetBinContent(i,j)<< endl;

      cout << "TT Mu: FR = " << NRMu_TT->GetBinContent(i,j) << " +/- " << NRMu_TT->GetBinError(i,j) 
	   << ", NT = " << NTMu_TT->GetBinContent(i,j) 
	   << ", NL = " << NLMu_TT->GetBinContent(i,j)<< endl;

      cout << "QCD Mu: FR = " 
	   << NRMu_QCD100->GetBinContent(i,j) << " +/- " << NRMu_QCD100->GetBinError(i,j)
	   << ", NT = " << NTMu_QCD100->GetBinContent(i,j) 
	   << ", NL = " << NLMu_QCD100->GetBinContent(i,j)<< endl;

      cout << "Data Mu: FR = " 
	   << NRMu_DEC->GetBinContent(i,j) << " +/- " << NRMu_DEC->GetBinError(i,j)
	   << ", NT = " << NTMu_DEC->GetBinContent(i,j) 
	   << ", NL = " << NLMu_DEC->GetBinContent(i,j)<< endl;

      cout << "Data Mu W/Z/T subtracted: FR = " << newratioMu->GetBinContent(i,j) << " +/- " << newratioMu->GetBinError(i,j)
	   << ", NT = " << newtightMu->GetBinContent(i,j) << ", NL = " << newlooseMu->GetBinContent(i,j) << endl;
    }
  }

  cout << "DONE" << endl;

}
