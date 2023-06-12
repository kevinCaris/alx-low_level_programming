#include <stdlib.h>
#include "main.h"
/**
 * create_array -  that creates an array of chars
 * @size: size of array.
 * @c: char to be checked.
 *
 * Return: pointer of arrya or NULL if it failed.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
return (NULL);


array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);


for (i = 0; i < size; i++)
array[i] = c;


return (array);
}

