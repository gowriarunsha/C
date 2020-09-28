#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int A[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int small=A[0];
	for(i=1;i<n;i++)
	{
		if(small>A[i])
		small=A[i];
	}
	printf("%d",small);
	
}
