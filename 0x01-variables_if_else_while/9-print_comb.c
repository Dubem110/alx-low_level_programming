#include <stdio.h>

/**
 * main - a program that prints all possible combinations of singe numbers.
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		putchar(x + '0');
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

