#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int *p=(int*) calloc(n,sizeof(int));
	if (p==NULL) {
		printf("Memory not allocated\n");
		return 0;
	}
	printf("Values stored initially in calloc memory:\n",n);
	for(i=0;i<n;i++) {
		scanf("%d",&p[i]);
	}
	printf("You entered:\n");
	for(i=0;i<n;i++) {
		printf("%d ",p[i]);
	}
	free(p);
	return 0;
}
