#include <stdio.h>

/*
 * main: prints 2-digits combinations.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i, j, n;

	for (i = 48; i <= 57; i++)
	{
		for (n = i + 1; n <= 57; n++)
		{
			for (j = n + 1; j <= 57; j++)
			{
				putchar(i);
				putchar(n);
				putchar(j);
				if (i != 55 || n != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
