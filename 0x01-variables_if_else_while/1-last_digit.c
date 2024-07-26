#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function that prints a statement
 * Return: 0
 */
int main(void)
{
	int n;

	char s[100], c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	sprintf(s, "%d", n);
	c = s[strlen(s) - 1];
	if (s[0] == '-')
	{
		printf("Last digit of %d is -%c and is less than 6 and not 0\n", n, c);
	}
	else if (c > '5')
	{
		printf("Last digit of %d is %c and is greater than 5\n", n, c);
	}
	else if (c == '0')
	{
		printf("Last digit of %d is %c and is 0\n", n, c);
	}
	else if (c < '6' && c != '0')
	{
		printf("Last digit of %d is %c and is less than 6 and not 0\n", n, c);
	}
	return (0);
}
