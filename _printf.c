#include "main.h"


/*
* _printf - function printf
*
* @format: string format
*
* Retorno: print value chars
*/
int _printf(const char *format, ...){
    unsigned int i = 0;

if (!format)
    return (NULL);
while (format[i])