#include <vector>

#include "TTree.h"

class ZHadronData;

class ZHadronData
{
public:
   std::vector<double> zMass;
   std::vector<double> zEta;
   std::vector<double> zPhi;
   std::vector<double> zPt;
   std::vector<double> genZMass;
   std::vector<double> genZEta;
   std::vector<double> genZPhi;
   std::vector<double> genZPt;
   std::vector<double> trackDphi;
   std::vector<double> trackPt;
   std::vector<double> trackDeta;
   std::vector<double> trackPDFId;
   std::vector<double> trackEta;
   std::vector<double> trackPhi;

   std::vector<double> muEta1;
   std::vector<double> muEta2;
   std::vector<double> muPhi1;
   std::vector<double> muPhi2;
   std::vector<double> muPt1;
   std::vector<double> muPt2;

   std::vector<double> muDeta;
   std::vector<double> muDphi;
   std::vector<double> muDR;
   std::vector<double> muDphiS;

   std::vector<double> genMuPt1;
   std::vector<double> genMuPt2;
   std::vector<double> genMuEta1;
   std::vector<double> genMuEta2;
   std::vector<double> genMuPhi1;
   std::vector<double> genMuPhi2;

   std::vector<double> genMuDeta;
   std::vector<double> genMuDphi;
   std::vector<double> genMuDR;
   std::vector<double> genMuDphiS;

   int hiBin;
   float hiHF;
   
   ZhadronData() {}
   ~ZhadronData() {}
   void SetBranch(TTree *t)
   {
      t->Branch("zMass",&zMass);
      t->Branch("zEta",&zEta);
      t->Branch("zPhi",&zPhi);
      t->Branch("zPt",&zPt);
      t->Branch("genZMass",&genZMass);
      t->Branch("genZEta",&genZEta);
      t->Branch("genZPhi",&genZPhi);
      t->Branch("genZPt",&genZPt);
      t->Branch("trackDphi",&trackDphi);
      t->Branch("trackDeta",&trackDeta);
      t->Branch("trackPt",&trackPt);
      t->Branch("trackPDFId",&trackPDFId);
      t->Branch("trackPhi",&trackPhi);
      t->Branch("trackEta",&trackEta);
      t->Branch("hiBin",&hiBin);
      t->Branch("hiHF",&hiHF);

      t->Branch("muEta1",&muEta1);
      t->Branch("muEta2",&muEta2);
      t->Branch("muPhi1",&muPhi1);
      t->Branch("muPhi2",&muPhi2);
      t->Branch("muPt1",&muPt1);
      t->Branch("muPt2",&muPt2);

      t->Branch("genMuPt1",&genMuPt1);
      t->Branch("genMuPt2",&genMuPt2);
      t->Branch("genMuEta1",&genMuEta1);
      t->Branch("genMuEta2",&genMuEta2);
      t->Branch("genMuPhi1",&genMuPhi1);
      t->Branch("genMuPhi2",&genMuPhi2);

      t->Branch("muDeta",&muDeta);
      t->Branch("muDphi",&muDphi);
      t->Branch("muDR",&muDR);
      t->Branch("muDphiS",&muDphiS);

      t->Branch("genMuDeta",&genMuDeta);
      t->Branch("genMuDphi",&genMuDphi);
      t->Branch("genMuDR",&genMuDR);
      t->Branch("genMuDphiS",&genMuDphiS);

   };
   
   void clear() {
      zMass.clear();
      zEta.clear();
      zPhi.clear();
      zPt.clear();
      genZMass.clear();
      genZEta.clear();
      genZPhi.clear();
      genZPt.clear();
      trackDphi.clear();
      trackPt.clear();
      trackDeta.clear();
      trackPDFId.clear();
      trackPhi.clear();
      trackEta.clear();

      muEta1.clear();
      muEta2.clear();
      muPhi1.clear();
      muPhi2.clear();
      muPt1.clear();
      muPt2.clear();

      genMuPt1.clear();
      genMuPt2.clear();
      genMuEta1.clear();
      genMuEta2.clear();
      genMuPhi1.clear();
      genMuPhi2.clear();

      muDeta.clear();
      muDphi.clear();
      muDR.clear();
      muDphiS.clear();
      genMuDeta.clear();
      genMuDphi.clear();
      genMuDR.clear();
      genMuDphiS.clear();
   }
   
};

