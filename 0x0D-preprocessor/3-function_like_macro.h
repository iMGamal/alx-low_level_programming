#ifndef _FUNCTION_LIKE_MACRO_H_
#define _FUNCTION_LIKE_MACRO_H_

#define ABS(x) 5

#endif

int main()
{
	int x;
	x = (1, 3, 5);
	printf("%d\n", ABS(x));
	return (0);
}
