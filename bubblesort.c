//bubble sort
#include<stdio.h>
#define MAX 25
int main()
{
	int n;
	int A[MAX];
	int i,j;
	int temp=0;
	printf("Input nummber of elements in array:");
	scanf("%d",&n);
	printf("Input elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j+1]<A[j])
			{
				temp=A[j+1];
				A[j+1]=A[j];
				A[j]=temp;
			}
			
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
	
}
