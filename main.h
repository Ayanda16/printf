#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdlib.h>

int _printf(const char *format, ...);
int parser(const char *format, conver_t f_list[], va_list args);

#endif
