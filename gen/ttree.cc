//c++ `root-config --cflags --libs` -shared -fPIC gen/ttree.cc -o gen/ttree
#include <TTree.h>
extern "C" {
TTree* TTree_TTree1() {
  return new TTree();
}
TTree* TTree_TTree2(char* name, char* title, Int_t splitlevel) {
  return new TTree(name, title, splitlevel);
}
void TTree_AddBranchToCache1(TTree* __obj, char* bname, Bool_t subbranches) {
  __obj->AddBranchToCache(bname, subbranches);
}
void TTree_AddBranchToCache2(TTree* __obj, TBranch* branch, Bool_t subbranches) {
  __obj->AddBranchToCache(branch, subbranches);
}
Int_t TTree_Branch1(TTree* __obj, TCollection* list, Int_t bufsize, Int_t splitlevel, char* name) {
  return __obj->Branch(list, bufsize, splitlevel, name);
}
Int_t TTree_Branch2(TTree* __obj, TList* list, Int_t bufsize, Int_t splitlevel) {
  return __obj->Branch(list, bufsize, splitlevel);
}
Int_t TTree_Branch3(TTree* __obj, char* folder, Int_t bufsize, Int_t splitlevel) {
  return __obj->Branch(folder, bufsize, splitlevel);
}
TBranch* TTree_Branch4(TTree* __obj, char* name, void* address, char* leaflist, Int_t bufsize) {
  return __obj->Branch(name, address, leaflist, bufsize);
}
TBranch* TTree_Branch6(TTree* __obj, char* name, Long_t address, char* leaflist, Int_t bufsize) {
  return __obj->Branch(name, address, leaflist, bufsize);
}
TBranch* TTree_Branch7(TTree* __obj, char* name, int address, char* leaflist, Int_t bufsize) {
  return __obj->Branch(name, address, leaflist, bufsize);
}
TBranch* TTree_Branch8(TTree* __obj, char* name, char* classname, void* addobj, Int_t bufsize, Int_t splitlevel) {
  return __obj->Branch(name, classname, addobj, bufsize, splitlevel);
}
void TTree_Draw1(TTree* __obj, Option_t* opt) {
  __obj->Draw(opt);
}
Long64_t TTree_Draw3(TTree* __obj, char* varexp, char* selection, Option_t* option, Long64_t nentries, Long64_t firstentry) {
  return __obj->Draw(varexp, selection, option, nentries, firstentry);
}
Int_t TTree_Fill1(TTree* __obj ) {
  return __obj->Fill();
}
TBranch* TTree_GetBranch1(TTree* __obj, char* name) {
  return __obj->GetBranch(name);
}
Long64_t TTree_GetEntries1(TTree* __obj ) {
  return __obj->GetEntries();
}
Long64_t TTree_GetEntries2(TTree* __obj, char* selection) {
  return __obj->GetEntries(selection);
}
Int_t TTree_GetEntry1(TTree* __obj, Long64_t entry, Int_t getall) {
  return __obj->GetEntry(entry, getall);
}
TObjArray* TTree_GetListOfBranches1(TTree* __obj ) {
  return __obj->GetListOfBranches();
}
Double_t* TTree_GetV11(TTree* __obj ) {
  return __obj->GetV1();
}
void TTree_SetBranchStatus1(TTree* __obj, char* bname, Bool_t status, UInt_t* found) {
  __obj->SetBranchStatus(bname, status, found);
}
Int_t TTree_Write1(TTree* __obj, char* name, Int_t option, Int_t bufsize) {
  return __obj->Write(name, option, bufsize);
}
Int_t TTree_Write2(TTree* __obj, char* name, Int_t option, Int_t bufsize) {
  return __obj->Write(name, option, bufsize);
}
} //extern C
