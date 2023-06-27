#include "main.h"
/**
 * Swap_int - this function swaps the values of two integers
 * return = Always 0.
 */
void swap_int(int *a, int *b)
{
	int x;
	
	x = *a;
	*a = *b;
	*b = x;	
}
