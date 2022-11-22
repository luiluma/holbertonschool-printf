#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

typedef struct funcf
{
	char *data;
	int (*f)(va_list);
} funcf_t;

int _printf(const char *format, ...); /*Prototype of _printf*/
int print_char(char c);
int print_string(char *s);
int get_spec_format(char *);
int (*get_func(const char *format))(va_list);

#endif