#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _strlen(char *cur_str);
int _numlen(int num);
char *inttostr(int num);

#endif
