#include<stdio.h>
#ifndef _OBJECT_LIKE_MACRO_
#define SIZE 1024
#endif

int main()
{	
	int n;
	n = 76 + SIZE;
	printf("%d\n", n);
	return (0);
}
