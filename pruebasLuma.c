#include "main.h"
/*
* get_func - select char para la conversion
*
* @s: verification
*
* Return: pointer a function
*/
int (*get_func(const char *s))(va_list)
{
    f_funct arr[] = {

        {"c", print_chr}, 
        {"s", print_str},
		{"i", print_int}, 
        {"d", print_int_dec},
        {"%", print_form},
    };
    int i = 0;
    while (i < 5)
    {
        if (s == arr[i].s[0])
        {
			return (arr[i].f);
        }
		i++;
	}
	return(NULL);
}

#include "main.h"
/*
*/
int _printf(const char *format, ...)
{
    va_list list; /*parametros*/
    int count = 0, i = 0;
    int (*p)();

    if (!format || (format[0] == '%' && format[1] == '\0'))
        return (1);
    va_start(list, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[] )
        }
    }
}