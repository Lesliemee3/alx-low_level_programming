#include <stdio.h>
/**
 * main - main block
 * Description: prints all the numbers of base 16 in lowercase.
 * Return: 0
 */

int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)

	{
		putchar(n);
	}

	for (c = 'a'; c <= 'f'; c++)

	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
