#include "main.h"
#include <stdarg.h>

/*
* get_func - selecciona chars para la conversion
*
* @s: verificacion
*
* Retorno: puntero a funcion
*/
int (* get_func(const char *s,))(va_list)
{
    f_funct arr[] = {

        {"c", print_chr}, 
        {"s", print_str},
		{"i", print_int}, 
        {"d", print_int},
        {"%"}, print_for},
};
    int i;
    i = 0;

    while (i < 5)
    {
        if (s == arr[i].s[0])
			return (arr[i].f);

		i++;
	}
	return (NULL);