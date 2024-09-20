#include <stdio.h>
/**
 * main - Entry point
 * Description: Function that prints numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 97;
	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
