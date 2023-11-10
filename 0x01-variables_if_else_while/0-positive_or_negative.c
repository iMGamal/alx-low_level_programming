#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** main - print value of n
 * Return: (0)
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		
		if(n > 0)	{
			printf("%d\nis positive", n);
		}
		if(n == 0)	{
			printf("%d\nis zero", n);
		}
		if(n < 0)	{
			printf("%d\nis negative", n);
		}
		return (0);
}
