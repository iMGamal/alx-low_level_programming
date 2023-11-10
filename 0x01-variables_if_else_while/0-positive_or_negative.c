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
		
		if(n > 0)
		{
			printf("value of n,%d\n", n);
		}
		if(n = 0)
		{
			printf("value of n,%d\n", n);
		}
		if(n < 0);
		{
			printf("value of n,%d\n", n);
		}
		return (0);
}
