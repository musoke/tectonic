/* This is dvipdfmx, an eXtended version of dvipdfm by Mark A. Wicks.

    Copyright (C) 2002-2016 by Jin-Hwan Cho and Shunsaku Hirata,
    the dvipdfmx project team.
    
    Copyright (C) 1998, 1999 by Mark A. Wicks <mwicks@kettering.edu>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
*/

#ifndef _ERROR_H_
#define _ERROR_H_

#include <tectonic/dpx-system.h>
#include <tectonic/internals.h>
#include <assert.h>
#include <stdio.h>

extern void error_cleanup (void);
extern void shut_up (int quietness);

extern PRINTF_FUNC(1,2) void dpx_message (const char *fmt, ...);
extern PRINTF_FUNC(1,2) void dpx_warning (const char *fmt, ...);

#endif /* _ERROR_H_ */
