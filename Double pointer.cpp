#include<stdio.h>
int main()
{
	int a=10;
	int *p;
	int **pp;
	p=&a;
	pp=&p;
	printf("The pointer of p is %d\n",p);
	printf("The pointer of pp is %d\n",pp);
	printf("The value of p is %d\n",*p);
	printf("The value of pp is %d\n",**pp);
	return 0;
}
