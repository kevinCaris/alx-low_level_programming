#include<stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - Allocates memory using malloc.
 * @b : The int to affected.
 *
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);

if (p == NULL)
exit(98);


return (p);

}
