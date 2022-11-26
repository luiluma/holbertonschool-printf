#include "main.h"
/**
 * select_funct - selection char
 * @arg: verification
 * Return: pointer for function
 */
int (*select_funct(char *arg))(char *, int, va_list)
{
	int i = 0;
	func_t form[] = {

		{"c", print_chr},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int},
		{"%", print_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (*arg == *(form[i]).ptr)
			return ((form[i].f));
		i++;
	}
	return (NULL);
}
