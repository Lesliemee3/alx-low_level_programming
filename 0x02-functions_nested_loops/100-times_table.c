#include "main.h"
/**
 * print_times_table - prints the times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)

{
int i = 0, rep, j;

if (n < 0 || n > 15)
	return;

while (i <= n)

{
	for (i = 0; i <= n; i++)

	{
	for (j = 0; j <= n; j++)

	{
		rep = i * j;
		if (j == 0)

			_putchar(rep + '0');
		else if (rep < 10)

		{
			_putchar(',');
			_putchar(' ');
			_putchar(rep + '0');
		}
		else if (rep < 100)

		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	i++;
}
}
}
