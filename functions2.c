#include "main.h"
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}

char *_reverse(char *s, int n)
{
	int i, copy;

	n--;

	for (i = 0; i <= n; i++, n--)
	{
		copy = s[i];
		s[i] = s[n];
		s[n] = copy;
	}

	return (s);
}

char *_itoa(int list, int base)
{
	char buffer[1024];
	int n, i;

	if (base < 2 || base > 32)
		exit(1);

	n = _abs(list);

	i = 0;
	while (n)
	{
		int r = n % base;

		r = _abs(r);
		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;

		n = n / base;
	}

	if (i == 0)
		buffer[i++] = '0';

	if (list < 0 && base == 10)
		buffer[i++] = '-';

	buffer[i] = '\0';

	return (_reverse(buffer, i));
}
int print_int(char *buffer, int counter, va_list list)
{
	int base = 10;
	char *str = _itoa(va_arg(list, int), base);

	return (_assign(buffer, counter, str));
}
int _assign(char *buffer, int counter, char *value)
{
	int i = 0;

	while (value[i])
	{
		buffer[i] = value[i];
		counter++;
		i++;
	}
	return (counter);
}