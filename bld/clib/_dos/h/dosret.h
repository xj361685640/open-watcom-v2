/****************************************************************************
*
*                            Open Watcom Project
*
*    Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
*
*  ========================================================================
*
*    This file contains Original Code and/or Modifications of Original
*    Code as defined in and that are subject to the Sybase Open Watcom
*    Public License version 1.0 (the 'License'). You may not use this file
*    except in compliance with the License. BY USING THIS FILE YOU AGREE TO
*    ALL TERMS AND CONDITIONS OF THE LICENSE. A copy of the License is
*    provided with the Original Code and Modifications, and is also
*    available at www.sybase.com/developer/opensource.
*
*    The Original Code and all software distributed under the License are
*    distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
*    EXPRESS OR IMPLIED, AND SYBASE AND ALL CONTRIBUTORS HEREBY DISCLAIM
*    ALL SUCH WARRANTIES, INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF
*    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR
*    NON-INFRINGEMENT. Please see the License for the specific language
*    governing rights and limitations under the License.
*
*  ========================================================================
*
* Description:  Routines for processing return code of DOS functions.
*
****************************************************************************/


extern  int _dosretax( int ax, int carry );
extern  int _dosret0( int ax, int carry );

#if defined( _M_IX86 ) && defined( __WATCOMC__ )
#if defined( _M_I86 )
#pragma aux _dosretax "_*" __parm [__ax] [__dx]
#pragma aux _dosret0 "_*" __parm [__ax] [__dx]
#else
#pragma aux _dosretax "_*" __parm [__eax] [__edx]
#pragma aux _dosret0 "_*" __parm [__eax] [__edx]
#endif
#endif
