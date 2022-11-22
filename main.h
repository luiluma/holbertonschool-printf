#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include<stdlib.h>
#include<stdio.h>
#include <stdarg.h>
#include <unistd.h>

/*prototypes*/

int (*get_func(const char *s))(va_list);
int _printf(const char *format, ...); /*Prototype of _printf*/
int print_char(va_list list);
int print_string(va_list list);
int get_spec_format(char *);
int (*get_func(const char *format))(va_list);

#endif
