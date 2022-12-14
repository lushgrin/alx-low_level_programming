#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - memory allocater
 * @b: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *c;
/* allocation of malloc(b) to c*/
	c = malloc(b);
/* exit fn calls all fns registered with atexit and terminates the program*/
	if (c == NULL)
/* atexit fn registers as a trmntn fn wc is called if the program terminates */
		exit(98);
	return (c);
}
