#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - check if a number is equal to 98
 * @name: the integer to check
 * @f: 0 if false, something else otherwise.
 */
void print_name(char *name, void (*f)(char *))
{

	(*f)(name);

}
