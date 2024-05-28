#include <stdio.h>

/*
 * main: prints 2-digits combinations.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
