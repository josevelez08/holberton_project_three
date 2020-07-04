#include "holberton.h"

/**
* is_prime_number - numeros primos
* @n: num checker  
*/

int is_prime_number(int n)
{ 
	return find_prime_number(n, 2);
} 

int  find_prime_number(int n, int i)
{
	if (n <= 2) 
	{
		if(n == 2){
			return 1;
		}else {
			return 0;
		}
	}
	else if ( n% i == 0)
	{
		return 0;
	} else if ( i * i> n){
		return 1;
	}
		
	return find_prime_number(n, i+1 );
} 