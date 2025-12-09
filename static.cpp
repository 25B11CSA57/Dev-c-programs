#include<stdio.h>
void stati()
{
	static int a=89;
	printf("%d\n",a);
}
int main()
{
	stati();
	stati();
}
