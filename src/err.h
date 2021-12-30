#ifndef _ERR_H_
#define _ERR_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

static inline void error(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	vfprintf(stderr, format, args);
	va_end(args);
	exit(1);
}

#endif
