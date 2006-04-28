/*
 * return IPsec version information
 * Copyright (C) 2001  Henry Spencer.
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Library General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/lgpl.txt>.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
 * License for more details.
 *
 * RCSID $Id: version.in.c,v 1.2 2004/03/16 12:26:32 as Exp $
 */

#ifdef __KERNEL__
#include <linux/netdevice.h>
#endif

#include "freeswan.h"

#define	V	"xxx"		/* substituted in by Makefile */
static const char strongswan_number[] = V;
static const char strongswan_string[] = "Linux strongSwan " V;

/*
 - ipsec_version_code - return IPsec version number/code, as string
 */
const char *
ipsec_version_code()
{
	return strongswan_number;
}

/*
 - ipsec_version_string - return full version string
 */
const char *
ipsec_version_string()
{
	return strongswan_string;
}
