//Write program in C to perform linear search.
#include<stdio.h>
#define MAX 20
int main()
{
	int n;
	int item=0;
	int A[MAX];
	int i;
	printf("Input number of elements in array:");
	scanf("%d",&n);
	printf("Input elements in array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("Input item to be searched:\n");
	scanf("%d",&item);
	
	for(i=0;i<n;i++)
	{
		if(item==A[i])
		{
			printf("%d is at position %d",item,(i+1));
			return 0;
		}
	}
	
	printf("Item not found!");
	return 0;
	
}
