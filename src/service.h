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

#ifndef _CPHL_SERVICE_H_
#define _CPHL_SERVICE_H_

#include "types.h"

struct x4_service
{
  x4_service();
  ~x4_service();

  bool open(const char * name, DWORD sam = SERVICE_ALL_ACCESS);
  void close();

  bool get_state(uint32 & state);

  bool start(int argc = 0, const char ** argv = 0);
  bool stop();

  bool control(uint32 op_code);

protected:

  x4_service(const x4_service &);
  operator = (const x4_service &);

protected:

  SC_HANDLE hManager, hService;
};

#endif
