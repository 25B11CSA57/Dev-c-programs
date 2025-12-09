#include<stdio.h>
int main()
{
	int m=10;
	int *n;
	n=&m;
	printf("The value of m is:%d\n",m);
	printf("The address of m is:%d\n",&m);
	printf("The value of n is:%d\n",n);
	printf("The address of m is:%d\n",&n);
	printf("The value of n is:%d\n",*n);
	return 0;
}
