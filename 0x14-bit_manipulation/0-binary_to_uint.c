#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: The number to be converted.
 *
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimalValue = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		decimalValue = 2 * decimalValue + (b[i] - '0');
	}
	return (decimalValue);
}
