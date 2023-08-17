#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - should print anything
 * @format: ls of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int g = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[g])
		{
			switch (format[g])
			{
				case 's':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'k':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'h':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 'c':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					g++;
					continue;
			}
			sep = ", ";
			g++;
		}
	}

	printf("\n");
	va_end(list);
}

