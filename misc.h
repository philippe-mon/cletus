/* Copyright 2014 Greg Horn <gregmainland@gmail.com>
 *
 * This file is hereby placed in the public domain, or, if your legal
 * system does not recognize such a concept, you may consider it
 * licensed under BSD 3.0.  Use it for good.
 */
#ifndef __MISC_H__
#define __MISC_H__

#include <time.h>
#include "./structures.h"

double floating_time(const timestamp_t * const t);
void gettime(timestamp_t * const t);

#endif // __MISC_H__
