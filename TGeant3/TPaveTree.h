#ifndef ROOT_TPaveTree
#define ROOT_TPaveTree
/* Copyright(c) 1998-1999, ALICE Experiment at CERN, All rights reserved. *
 * See cxx source for full Copyright notice                               */

/* $Id: TPaveTree.h,v 1.2 2002/07/10 08:32:52 alibrary Exp $ */

//////////////////////////////////////////////////////////////////////////
//                                                                      //
// TPaveTree                                                            //
//                                                                      //
// A TPaveLabel specialized for Geant GDTREE                            //
//                                                                      //
//////////////////////////////////////////////////////////////////////////

#include "TPaveLabel.h"

class TPaveTree : public TPaveLabel
{
public:
  TPaveTree();
  TPaveTree(Coord_t x1, Coord_t y1,Coord_t x2 ,Coord_t y2, const Text_t *label);
  virtual      ~TPaveTree();
  virtual void  DrawSpec(); // *MENU*
  virtual void  DrawTree(Int_t levmax=15, Int_t iselt=111); // *MENU*
  virtual void  DrawTreeParent(Int_t levmax=3, Int_t iselt=111); // *MENU*
  virtual void  ExecuteEvent(Int_t event, Int_t px, Int_t py);
  virtual void  SavePrimitive(ofstream &out, Option_t *option);

private:  
  TPaveTree(const TPaveTree &PaveTree) {}

  ClassDef(TPaveTree,1)  //A TPaveLabel specialized for Geant GDTREE
};

#endif //ROOT_TPaveTree
