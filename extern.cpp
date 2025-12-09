#include<stdio.h>
extern int x;
int ext()
{
	printf("%d",x);
}
int main()
{
	ext();
	return 0;
}
int x=78;
