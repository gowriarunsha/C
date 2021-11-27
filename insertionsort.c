//program to sort an array using insertion sort
#include<stdio.h>
#define MAX 100
int main()
{
	int i,j,n,key,temp;
	int A[MAX];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	//insertionsort
	for(i=1;i<n;i++)
	{
		key=A[i];
		j=i-1;
		while(j>=0&&A[j]>key)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
		
	}
	//display
	printf("Sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}

