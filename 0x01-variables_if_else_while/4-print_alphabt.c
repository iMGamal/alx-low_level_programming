#include <stdio.h>
/*
 *main - Entry point
 *Description: 'program that prints alphabet except for e and q'
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
