#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _strlen(char *str);

#endif /* MAIN_H */