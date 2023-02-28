#include <stdio.h>

/**
 * swap_int - Swap the values of two integers.
 * @a: The first int to be swapped.
 * @b: The second int to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
