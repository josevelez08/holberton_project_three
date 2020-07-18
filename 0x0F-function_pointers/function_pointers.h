#ifndef FUNCTION
#define FUNCTION
#include <stdio.h>
void print_name(char *name, void (*f)(char *));
void print_name_uppercase(char *name);
void print_name_as_is(char *name);
void print_elem(int elem);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif