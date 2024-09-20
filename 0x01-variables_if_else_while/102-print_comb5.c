#include <stdio.h>
/**
 * main - Entry point
 * Description: Function that prints numbers
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	i = 48;
	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(' ');
				putchar(i);
				putchar(k);
				if (i != 57 || j != 56 || k != 57)
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
