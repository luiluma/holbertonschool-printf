#include "main.h"
/*
 * get_func - selecciona chars para la conversion
 * @s: verificacion
 * Return: puntero a funcion
 */
int (*select_funct(char *arg))(char *, int , va_list)
{
	int i = 0;
	func_t form[] = {

		{"c", print_chr},
		{"s", print_str},
		/*{"i", print_int},
		{"d", print_int},
		{"%", print_form},*/
		{NULL, NULL}
	};

	while (i < 10)
	{
		if (*arg == *(form[i]).ptr)
			return ((form[i].f));
		i++;
	}
	return (NULL);
}