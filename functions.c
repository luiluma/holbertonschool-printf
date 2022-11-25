#include "main.h"
/**
 * print_chr - the funtion name
 * @c: argument
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

<<<<<<< HEAD
/* int print_form (char *buffer, int counter, va_list)
=======
int print_module (char *buffer, int counter, va_list __attribute__((unused)) list)
>>>>>>> 636dfc3f84b159f741124ccaa062e70bb8641887
{
	buffer[0] = '%';
	counter++;
	return(counter);
<<<<<<< HEAD
}*/
=======
}

int verify_format(char v)
{
	if(v == 'd' || v == 'i' || v == 's' || v == 'c' || v == '%')
		return(1);
	else
		return(0);
}

int correct_printf(char *format, char* buffer)
{
	if (!format || !buffer)
		return (0);
	if (format[0] == '%' && format[1] == '\0')
		return (0);
	else
		return (1);
}
>>>>>>> 636dfc3f84b159f741124ccaa062e70bb8641887
