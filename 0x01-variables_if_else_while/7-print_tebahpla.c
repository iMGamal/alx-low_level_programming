#include <stdio.h>
/**
 * main - Entry point
 * Description: Function that prints alphabet
 * Return: 0
 */
int main(void)
{
	int i;

	i = 122;
	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);
	return (0);
}
