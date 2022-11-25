#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct funct
{
	char *ptr;
	int (*f)(char *, int, va_list);
} func_t;

/*prototypes*/
int _printf(char *format, ...); /*Prototype of _printf*/

int verify_format(char);
int print_str(char *, int, va_list);
int print_chr(char *, int, va_list);
int print_module(char *buffer, int counter, va_list __attribute__((unused)));
int correct_printf(char *, char*);
int (*select_funct(char *arg))(char *, int, va_list);
#endif
