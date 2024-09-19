#include <stdio.h>

/**
 * main - Function that prints letters
 * Return: 0;
 */
int main(void)
{
	int n, x;

	for (n = 0; n < 100; n++)
	{
		for (x = n + 1; x < 100; x++)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(32);
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			if (n != 98)
			{
				putchar(',');
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
