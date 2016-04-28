#include "step1.cc"

void makeSingleStep1(){

//   TString inputFile="root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest/nominal/DoubleMuon_Run2015D_16Dec2015/DoubleMuon_Run2015D_16Dec2015_1.root";
  TString inputFile="root://cmseos.fnal.gov//store/user/lpcljm/LJMet_FakeRateTest/nominal/DoubleEG_Run2015D_16Dec2015/DoubleEG_Run2015D_16Dec2015_1.root";


  TString outputFile="test.root";

  gSystem->AddIncludePath("-I$CMSSW_BASE/src/");

  step1 t(inputFile,outputFile);
  t.Loop();
}
