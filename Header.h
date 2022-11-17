#ifdef HEADER_H
#define HEADER_H

//Libraries:
#include<stdlib.h>
#include<stdio.h>
#include <stdarg.h>


//Estructura de la funcion:
typedef struct f_funct
{
	char *f_funct;
	int (*f)(int a, int b);
} f_funct;



#endif HEADER_H
