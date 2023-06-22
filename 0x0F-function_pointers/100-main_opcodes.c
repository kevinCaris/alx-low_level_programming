#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 *
 * @argc: number of command line arguments
 * @argv: pointer to an array containing the arguments
 *
 * Return: 0 if success, 1 if incorrect number of arguments,
 * 2 if negative number
 */
int main(int argc, char **argv)
{
int i, n;

if (argc != 2)
{
printf("Error\n");
return (1);
}

n = atoi(argv[1]);

if (n < 0)
{
printf("Error\n");
return (2);
}

unsigned char *p = (unsigned char *)main;

for (i = 0; i < n; i++)
{
printf("%02x", *(p + i));
if (i == n - 1)
printf("\n");
else
printf(" ");
}
return (0);
}

