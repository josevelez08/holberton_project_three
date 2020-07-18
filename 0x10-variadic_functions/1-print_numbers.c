#include <stdio.h>
#include <stdarg.h>
/**
* print_numbers - add all numbers
* @separator: repeating number
* @n: count
* Return: 0 always
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum = va_arg(valist, int);
		printf("%d", sum);
			if (i < n - 1)
			{
				printf("%s", separator);
			}
	}
			printf("\n");

	va_end(valist);
}
