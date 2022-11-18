#include "main.h"

int _printf(const char *format, ...);
{
    va_list list; /*parametros*/
    int count = 0;
    int i = 0;
    va_start(list, format)

	    if (!format || (format[0] == '%' && format[1] == '\0'))
		return (1);
	
    while
    {
        if (format[i] == '%')
            f_funct = get_func(format[i + 1]);
        if (f_funct == NULL) 
        {
            _putchar(format[i]);
            count++;
            i++;
        }
        else
        {
            _putchar(format[i]);
            count++;
            i++;
        }
    }
    va_end(list);
    return (count);
}