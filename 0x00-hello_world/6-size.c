#include <stdio.h>
/**
* main - print sereval sizeof for the  types
* rerurn: 0
*/
int main(void)
{   
    char sizeChar;
	int sizeInt;
	long sizeLong;
	long long sizeLongLong;
	float sizeFloat;

	printf("Size of a char: %d byte(s)\n", sizeof(sizeChar));
	printf("Size of an int: %d byte(s)\n", sizeof(sizeInt));
	printf("Size of a long int: %d byte(s)\n", sizeof(sizeLong));
	printf("Size of a long long int: %d byte(s)\n", sizeof(sizeLongLong));
	printf("Size of a float: %d byte(s)\n", sizeof(sizeFloat));
	return (0);
}