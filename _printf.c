#include "main.h"
/*
<<<<<<< HEAD
* _printf - function printf
*
* @format: string format
*
* Return: print value chars
*/
int _printf(const char *format, ...){
    unsigned int i = 0;
=======
 * _printf - function printf
 * @format: string format
 * Retorno: print value chars
 */
int _printf(const char *format, ...)
{
    unsigned int i = 0, count = 0;
    va_list list;

    va_start(list, format);

    if (!format)
        exit(1);
    while (format[i])
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            count++;
        }
    }
}