#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include<stdlib.h>
#include<stdio.h>
#include <stdarg.h>
#include<string.h>
#include <unistd.h>

/*prototypes*/
int (*get_func(const char *s))(va_list);
int _printf(const char *format, ...);

//Estructura de la funcion:
typedef struct f_funct
{
	char *f_funct;
	int (*f)(int a, int b);
} f_funct;



#endif
