#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int charwrit(char g);
int _printf(const char *format, ...);
void clean_bufmem(char bufmem[], int *x);
#endif
