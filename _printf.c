#include "main.h"
/*
 * _printf - function printf
 * @format: string format
 * Return: print value chars
 */
int _printf(char *format, ...)
{
	int i = 0, counter = 0;
	int (*f)(char *, int, va_list);
	char *buffer;
	va_list list;

	buffer = malloc(5000);
	va_start(list, format);
	if (!format || !buffer || (format[0] == '%' && format[1] == '\0'))
		return(-1);
for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[counter] = format[i];
			counter ++;
		}
		else if (format[i] == '%' && verify_format(format[i + 1]) == 1)
		{
				f = select_funct(&(format[i + 1]));
				if (f != NULL)
		    {
				counter = f(&buffer[counter], counter, list);
				i++;
			}
			else
			{
				buffer[counter] = format[i];
				counter++;
			}
		}
		else
		{
			buffer[counter] = format[i];
			counter ++;
		};
	}
	counter = _strlen(buffer);
	write(1, buffer, counter);
	free(buffer);
	va_end(list);
	return (counter);
}