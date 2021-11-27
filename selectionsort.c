//program to sort array using selection sort
#include<stdio.h>
#define MAX 100
int main()
{
	int i,j,n,min_index,temp;
	int A[MAX];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	//selectionsort
	
 int minimumIndex = 0;
    for (i = 0; i < n - 1; i++)
    {
        minimumIndex = i;
        for (j = i+1; j < n; j++)
        {
            if (A[j] < A[minimumIndex])
                minimumIndex = j;
        }
        int temp = A[minimumIndex];
        A[minimumIndex] = A[i];
        A[i] = temp;
    }

	//display
	printf("Sorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}
