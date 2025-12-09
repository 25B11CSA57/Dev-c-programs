#include<stdio.h>
int fibanacci(int i)
{
	if(i<=1)
	{
		return i;
	}
	else
	{
		return fibanacci(i-1)+ fibanacci(i-2);
	}
}
int main()
{
	int n,i;
	printf("Enter the number of terms in the Fibanacci sequence:");
	scanf("%d",&n);
	printf("Fibanacci Sequence:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",fibanacci(i));
	}
	return 0;
}
