/*
 *	This file is a part of ipsec2k library.
 *	Copyright (c) 2003-2011 Alex Pankratov. All rights reserved.
 *
 *	http://swapped.cc/ipsec2k
 */

/*
 *	The library is distributed under terms of BSD license. 
 *	You can obtain the copy of the license by visiting:
 *
 *	http://www.opensource.org/licenses/bsd-license.php
 */

#ifndef _CPHL_IPSEC_MISC_H_
#define _CPHL_IPSEC_MISC_H_

#include "ipsec_types.h"
#include "buffer"

//
// serializes 'ipsecData' portion of apXxx structures
//
void serialize(buffer & , const x4_ipsec_filters & );
void serialize(buffer & , const x4_ipsec_policy & );
void serialize(buffer & , const x4_ipsec_nfa & );
void serialize(buffer & , const x4_isakmp_policy & );
void serialize(buffer & , const x4_ipsec_bundle & );

#endif
