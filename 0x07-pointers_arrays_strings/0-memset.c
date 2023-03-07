
Search or jump to…
Pulls
Issues
Codespaces
Marketplace
Explore
 
@Dubem110 
Danyhoney
/
alx-low_level_programming-1
Public
forked from gospelin/alx-low_level_programming
Fork your own copy of Danyhoney/alx-low_level_programming-1
Code
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming-1/0x07-pointers_arrays_strings/0-memset.c
@gospelin
gospelin 0x07-pointers_arrays_strings
Latest commit 77a51df on Apr 26, 2022
 History
 1 contributor
17 lines (15 sloc)  294 Bytes

#include "main.h"
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
