#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: variable number of paramters to calculate the sum of.
 *
 * Return: If z == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int a, ...)
{
	va_list ap;
	unsigned int z, sum = 0;

	va_start(ap, a);

	for (z = 0; z < a; z++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

