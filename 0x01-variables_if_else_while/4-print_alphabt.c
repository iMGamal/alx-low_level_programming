#include <stdio.h>
/**
 * main - Entry point
 * Description: Function that prints alphabet
 * Return: 0
 */
int main(void)
{
	int i;

	i = 97;
	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);
	return (0);
}
