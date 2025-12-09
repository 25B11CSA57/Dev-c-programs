#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("Before swapping values a=%d, b=%d\n",a,b);
	swap(&a,&b);
	printf("After swapping values int main function a=%d,b=%d\n",a,b);
	return 0;
}
void swap(int*a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping a=%d,b=%d\n",*a,*b);
	
}
