#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - imprimir todo
* @format: formato
*
*/

void print_all(const char * const format, ...)
{
		int j = 3;
		int i = 0;
		char cont;

	{
			va_list valist;

			va_start(valist, format);

				while (i < j)
				{
					if (i == 0)
						{
						cont = va_arg(valist, int);
						printf("%c, ", cont);
					}
					if (i == 1)
					{
					cont = va_arg(valist, int);
					printf("%i, ", cont);
					}
					else if (i == 2)
					{
					cont = va_arg(valist, double);
					printf("%i", cont);
					}
					i++;
				}
			printf("\n");
			va_end(valist);
	}
}
