#include <stdio.h>
#include <string.h>
#include "main.h"

char* _strcat(char* dest, const char* src) {
    char* original_dest = dest;  // Sauvegarde du pointeur original de destination

    // Déplacement du pointeur dest à la fin de la chaîne
    while (*dest != '\0') {
        dest++;
    }

    // Copie des caractères de src à dest (y compris le caractère nul de fin)
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';  // Ajout du caractère nul de fin à la fin de dest

    return original_dest;
}
