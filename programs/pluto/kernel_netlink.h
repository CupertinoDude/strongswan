/* declarations of routines that interface with the kernel's pfkey mechanism
 * Copyright (C) 1998-2001  D. Hugh Redelmeier.
 * Copyright (C) 2003  Herbert Xu
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * RCSID $Id: kernel_netlink.h,v 1.1 2004/03/15 20:35:28 as Exp $
 */

#if defined(KLIPS) && defined(linux)
extern const struct kernel_ops linux_kernel_ops;
#endif
