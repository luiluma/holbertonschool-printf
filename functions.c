#include "main.h"
/**
 * print_chr - the function name
 * @buffer: printf string content
 * @counter: count arg
 * @list: number for the list the arg the string
 * Return: 0
*/

int print_chr(char *buffer, int counter, va_list list)
{
	buffer[0] = va_arg(list, int);
	counter++;
	return (counter);
}
/**
 * print_str - print a string.
 * @buffer: string buf.
 * @counter: count string
 * @s: point
 * @list: va_list arg
 * Return: long to print
*/

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
/**
* print_mod - print '%' character
* @buffer: character buf
* @counter: counter string
* @list: va_list arguments
* Return: long to string
*/

int print_mod(char *buffer, int counter, va_list __attribute__((unused)) list)
{
	buffer[0] = '%';
	counter++;
	return (counter);
}
/**
 * verify_format - verifies that only certain characters are received
 * @v: the format character
 * Return: 0 and if "v" is some characters return 1
 *
*/
int verify_format(char v)
{
if (v == 'd' || v == 'i' || v == 's' || v == 'c' || v == '%')
	return (0);
else
	return (1);
}
/**
 * correct_printf - correct output
 * @format: point argument base
 * @buffer: point long memory
 * Return: 0
 *
*/
int correct_printf(char *format, char *buffer)
{
	if (!format || !buffer)
		return (0);
	if (format[0] == '%' && format[1] == '\0')
		return (0);
	else
		return (1);
}
