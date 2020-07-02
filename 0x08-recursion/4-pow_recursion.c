#include "holberton.h"
/**
 * _pow_recursion - potencia
 * @x: base
 * @y: exponente
 */

int _pow_recursion(int x, int y)
{ 
  int elev;
  
  if ( y < 0 )
  {
    return (-1);
  }
  else if ( y == 0)
  {
    return (1);
  }
  else 
  {
    elev = ( x * (_pow_recursion (x, y - 1)));
    
   return (elev);
  }
}
