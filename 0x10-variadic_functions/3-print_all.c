#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function to print anything
 * @format: all types of argument passed to
 *	the function
 * @...: variable number of strings
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int n = 0, k, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[n])
	{
		k = 0;
		while (t_arg[k])
		{
			if (format[n] == t_arg[k] && c)
			{
				printf(",");
				break;
			} k++;
		}
		switch (format[n])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} n++;
	}
	printf("\n"), va_end(valist);
}
