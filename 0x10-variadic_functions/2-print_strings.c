#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - imprimir cadenas
* @separator: seaparator
* @n: tamaño
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *string;

va_start(valist, n);

		for (i = 0; i < n; i++)
		{
			if (separator == NULL)
			{
				return;
			}
			string = va_arg(valist, char *);
			if (string == NULL)
			{
				printf("(nill)");
				return;
			}
			else
			{
			printf("%s", string);
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
			}
		}
			printf("\n");
		va_end(valist);
}
