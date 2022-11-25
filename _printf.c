#include "main.h"
/**
* _printf - function printf
* @format: string format
* Return: print value chars
*/
int _printf(char *format, ...) /*prototipo*/
{
	int i = 0, counter = 0; /* i va a tomar la posicion de la string  */
	int (*f)(char *, int, va_list); /* la f nos da como parametros un puntero char, un entero y el va_list*/
	char *buffer; /**/
	va_list list;

buffer = malloc(2000);

	va_start(list, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		exit(1);
for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[counter] = format[i];
			counter ++;
		}
		else
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
	}
	write(1, buffer, counter);
	free(buffer);
	va_end(list);
	return (counter);
}