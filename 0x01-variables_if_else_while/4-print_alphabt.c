#include <stdio.h>

/**
 * main - print all alphabet in lower case except e and q
 *
 * Return: Always 0
 */

int main(void)

{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
