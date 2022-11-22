#include "main.h"
/*
* get_func - selecciona chars para la conversion
*
* @s: verificacion
*
* Return: puntero a funcion
*/
int (*get_func(const char *argument))(va_list)
{
    f_funct form[] = {

        {"c", print_chr}, 
        {"s", print_str},
		{"i", print_int}, 
        {"d", print_int},
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
	return (NULL);
}