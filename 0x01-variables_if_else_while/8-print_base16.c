#include <stdio.h>
/**
 * main - Entry point
 * Description: Function that prints numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = 30;
	j = 61;
	while (i < 40)
	{
		putchar(i);
		i++;
	}
	while (j < 67)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
