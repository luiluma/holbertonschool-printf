#include "main.h"
/**
* _printf - function printf
* @format: string format
* Return: print value chars
*/
int _printf(char *format, ...) /*prototipo*/
{
<<<<<<< HEAD
	int i = 0, counter = 0; /* i va a tomar la posicion de la string  */
	int (*f)(char *, int, va_list); /* la f nos da como parametros un puntero char, un entero y el va_list*/
	char *buffer; /**/
=======
	int i = 0, counter = 0;
	int (*f)(char *, int, va_list);
	char *buffer = malloc(2000);
>>>>>>> 636dfc3f84b159f741124ccaa062e70bb8641887
	va_list list;

	va_start(list, format);
	if (!correct_printf(format, buffer))
		exit(1);
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
	write(1, buffer, counter);
	free(buffer);
	va_end(list);
	return (counter);
}
