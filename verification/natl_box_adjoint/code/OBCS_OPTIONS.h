C $Header: /u/gcmpack/MITgcm/verification/natl_box_adjoint/code/Attic/OBCS_OPTIONS.h,v 1.1.2.1 2002/02/05 20:34:35 heimbach Exp $
C $Name:  $
 
C CPP options file for OBCS package
C
C Use this file for selecting options within the OBCS package
C
C OBCS is enabled with ALLOW_OBCS in CPP_OPTIONS.h

#include "CPP_OPTIONS.h"

#ifdef ALLOW_OBCS

C This include hooks to the Orlanski Open Boundary Radiation code
#undef ALLOW_ORLANSKI

C This includes hooks to sponge layer treatment of uvel, vvel
#define ALLOW_OBCS_SPONGE

C North/South/East/West open boundaries
 
#define ALLOW_OBCS_NORTH
#define ALLOW_OBCS_SOUTH
#define ALLOW_OBCS_EAST
#define ALLOW_OBCS_WEST

#endif /* ALLOW_OBCS */
