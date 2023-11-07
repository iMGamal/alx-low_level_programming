#include<stdio.h>
#ifndef _OBJECT_LIKE_MACRO_H
#define _OBJECT_LIKE_MACRO_H
#define SIZE 1024
#endif

int main()
{	
	int n;
	n = 76 + SIZE;
	printf("%d\n", n);
	return (0);
}
