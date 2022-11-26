#include "main.h"
/**
 * print_chr - the function name
 * @buffer: printf string content
 * @counter: count arg
 * @c: argument
 * @list: number for the list the arg the string
 * Return: 1
*/

int print_chr(char *buffer, int counter, va_list list)
{
	buffer[0] = va_arg(list, int);
	counter++;
	return (counter);
}

int print_str(char *buffer, int counter, va_list list)
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

int print_mod(char *buffer, int counter, va_list __attribute__((unused)) list)
{
	buffer[0] = '%';
	counter++;
	return (counter);
}

int verify_format(char v)
{
if (v == 'd' || v == 'i' || v == 's' || v == 'c' || v == '%')
	return (0);
else
	return (1);
}

int correct_printf(char *format, char *buffer)
{
	if (!format || !buffer)
		return (0);
	if (format[0] == '%' && format[1] == '\0')
		return (0);
	else
		return (1);
}
