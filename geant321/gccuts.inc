*
* $Id: gccuts.inc,v 1.1.1.1 2002/06/16 15:18:38 hristov Exp $
*
* $Log: gccuts.inc,v $
* Revision 1.1.1.1  2002/06/16 15:18:38  hristov
* Separate distribution  of Geant3
*
* Revision 1.1.1.1  1999/05/18 15:55:16  fca
* AliRoot sources
*
* Revision 1.1.1.1  1995/10/24 10:20:31  cernlib
* Geant
*
*
#ifndef CERNLIB_GEANT321_GCCUTS_INC
#define CERNLIB_GEANT321_GCCUTS_INC
*
*
* gccuts.inc
*
#if !defined(CERNLIB_INCLUDE)
      COMMON/GCCUTS/CUTGAM,CUTELE,CUTNEU,CUTHAD,CUTMUO,BCUTE,BCUTM
     +             ,DCUTE ,DCUTM ,PPCUTM,TOFMAX,GCUTS(5)
C
#if defined(CERNLIB_TYPE)
#include "geant321/gtcuts.inc"
#endif
#endif
*
* gccuts.inc
*
#if defined(CERNLIB_INCLUDE)
*
#include "geant321/incbeg.inc"
     +   gccuts
#include "geant321/incend.inc"
#endif

#endif