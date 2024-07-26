#include <stdio.h>

/**
 * main - Function that prints letters
 * Return: 0;
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n < 57)
		{
			putchar(',');
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
