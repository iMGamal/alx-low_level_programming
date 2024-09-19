#include <stdio.h>

/**
 * main - Function that prints letters
 * Return: 0;
 */
int main(void)
{
	int n, x, i;

	for (i = 48; i < 58; i++)
	{
		for (n = i + 1; n < 58; n++)
		{
			for (x = n + 1; x < 58; x++)
			{
				putchar(i);
				putchar(n);
				putchar(x);
				if (i != 55)
				{
					putchar(',');
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
