#include <stdio.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
			sum = va_arg(valist, int);
			printf("%d",sum);
			if ( i < n -1)
			{
				printf("%s",separator);
			}
	}
			printf("\n");

	va_end(valist);
}
