#include<stdio.h>
int main()
{
	int a=10;
	float b=2.4;
	void *p;
	p=&a;
	printf("The value of a is %d\n",*(int*)p);
	printf("The value of p is %d\n",p);
	p=&b;
	printf("The value of b is %.1f\n",*(float*)p);
	printf("The value of p is %d\n",p);
	return 0;
}
