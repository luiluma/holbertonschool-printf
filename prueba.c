#include "main.h"


int negativeint(va_list n, int count)
{
    int number;

    number = va_arg(n, int);

	if (number < 0)
		count += write(1,'-',1);
}