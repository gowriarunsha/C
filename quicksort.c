//program to sort array using quick sort
#include<stdio.h>
#define MAX_SIZE 100
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
//quicksort function
void quicksort(int A[],int l,int h)
{
	if(l<h)
	{
		int p=partition(A,l,h);
		//sorting two separate sections
		quicksort(A,l,p-1);
		quicksort(A,p+1,h);
	}

}
//partition function
int partition(int A[],int l,int h)
{
	int i,j;
	int pivot=A[h];
	i=l;
	for(j=l;j<=h;j++)
	{
		if(A[j]<pivot)
		{
			swap(&A[i],&A[j]);
			i++;
		}
	}
	swap(&A[i],&A[h]);
	return i;
}
int main()
{
	int n,A[MAX_SIZE],i;
	printf("Input n:");
	scanf("%d",&n);
	printf("Input elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	quicksort(A,0,n-1);
	//display
	printf("Sorted Array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}




















