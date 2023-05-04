#ifndef _COMM_H
#define _COMM_H

#include "main.h"

/**
 * slen - get string length
 * @s: string
 * Return: length
 */
__home int slen(const char *s)
{
	int len;

	for (len = 0; s[len];)
		len++;

	return (len);
}

/**
 * valid - validate a binary string
 * @s: string
 * Return: TRUE ? 1 : 0
 */
__home int valid(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] != '0' && s[i] != '1')
			return (0);

	return (1);
}

typedef unsigned int uint;
typedef unsigned long int ulint;

/**
 * out_of_range - check if index in range
 * @index: index
 * Return: SUCCESS ? 1 : 0
 */
__home int out_of_range(uint index)
{
	uint bits;

	bits = sizeof(ulint) * 8;
	if (index > bits)
		return (1);

	return (0);
}
#endif
#ifndef NO_PASS
#define NO_PASS

/* Password cracker */

/**
 * struct char_s - struct
 * @c: character
 * @next: next
 */
typedef struct char_s
{
	int c;
	struct char_s *next;
} char_x;

/**
 * struct char_g - struct
 * @i: pass group
 * @next: next
 */
typedef struct char_g
{
	char_x i;
	struct char_g *next;
} char_t;

#endif
