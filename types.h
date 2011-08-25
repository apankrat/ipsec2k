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

#ifndef _CPHL_TYPES_H_
#define _CPHL_TYPES_H_

//
//
//
#pragma warning (disable: 4786)

//
//
//
#include <objbase.h>

typedef unsigned char  uint8;
typedef unsigned short uint16;
typedef unsigned long  uint32;
typedef unsigned int   uint;

// boolean padded to 4 bytes
enum bool32
{
  false32,
  true32
};

// byte padded to 4 bytes
typedef uint32 byte32;

// guid
typedef GUID guid;

// IPv4 address
typedef byte ipv4[4];

// regular string
#include <string>
using std::string;

// unicode string
#include "wstring"

// vector
#include <vector>
using std::vector;

#endif
