#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @s: A pointer to the string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char* string_toupper(char* str) {
    char* ptr = str;  // Pointer to iterate through the string

    while (*ptr) {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - 32;  // Convert lowercase letter to uppercase
        }
        ptr++;
    }

    return str;
}

