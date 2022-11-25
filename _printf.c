#include "main.h"
/**
* _printf - function printf
* @format: string format
* @buffer: printf string content
* Return: print value chars
*/
int _printf(char *format, ...) /*prototipo*/
{
	int i = 0, counter = 0; /*declaramos variables*/
	int (*f)(char *, int, va_list);
	char *buffer = malloc(2000); /*declaramos un puntero buffer el cual es igual a un espacio de memoria 2000*/
	va_list list; /*le pasamos a va_list el parametro llamado list*/

	va_start(list, format); /**/
	if (!correct_printf(format, buffer))
		exit(1); /*salida error*/
	for (; format[i] != '\0'; i++) /* */
	{
		if (format[i] != '%') /* */
		{
			buffer[counter] = format[i]; 
			counter++;
		}
		else if (format[i] == '%' && !verify_format(format[i + 1]))
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
			counter++;
		};
	}
	write(1, buffer, counter);
	free(buffer);
	va_end(list);
	return (counter);
}
