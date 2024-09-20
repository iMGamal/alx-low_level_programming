#include <stdio.h>
/**
 * main - Entry point
 * Description: Function that prints numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if ( i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
