#ifdef MAIN_H
#define MAIN_H

//Libraries:
#include<stdlib.h>
#include<stdio.h>
#include <stdarg.h>
#include<string.h>
#include <unistd.h>


//Estructura de la funcion:
typedef struct f_funct
{
	char *f_funct;
	int (*f)(int a, int b);
} f_funct;



#endif MAIN_H
