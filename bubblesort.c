//program to sort array using bubble sort
#include<stdio.h>
#define MAX 100

int main()
{
	int i,j,n,temp;
	int A[MAX];
	printf("Input n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	//bubblesort
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
			temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
		}
	}
	//display
	printf("Sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	
}
