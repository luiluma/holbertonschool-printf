#include "main.h"
/**
 * print_chr - the funtion name
 * @c: argument
 * Return: 1
*/

int print_chr (char *buffer, int counter, va_list list)
{
	buffer[0] = va_arg(list, int);
	counter++;
	return (counter);
}

int print_str (char *buffer, int counter, va_list list)
{
	char *s;
	int i = 0;

	s = va_arg(list, char*);
	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		buffer[i] = s[i];
		i++;
		counter++;
	}
	return (counter);
}

/*int print_form (char *buffer, int counter, va_list)
{
	buffer[0] = '%';
	counter++;
	return(counter);
}*/