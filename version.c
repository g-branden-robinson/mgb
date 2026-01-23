/*	$OpenBSD: version.c,v 1.11 2023/03/08 04:43:11 guenther Exp $	*/

/* This file is in the public domain. */

/*
 * This file contains the string that gets written
 * out by the emacs-version command.
 */

#include <sys/queue.h>
#include <signal.h>
#include <stdio.h>

#include "def.h"

const char	version[] = "mgb (based on mg hboetes-20230501)";

/*
 * Display the version; copy the version string into the minibuffer.
 */
int
showversion(int f, int n)
{
	ewprintf("%s", version);
	return (TRUE);
}
