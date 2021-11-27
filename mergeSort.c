//program to sort an array using merge sort
#include<stdio.h>
#define MAX_SIZE 100

void merge(int A[],int l,int m,int r);
void display(int A[],int n)
{
	int i;
	printf("Sorted Array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
}
void mergeSort(int A[],int l,int r)
{
	if(l<r)
	{
		int m=l+(r-l)/2;
		mergeSort(A,l,m);
		mergeSort(A,m+1,r);
		merge(A,l,m,r);
	}
}
void merge(int A[],int l,int m,int r)
{
	int i,j,k;
	
	//length of sub arrays
	int n1=m-l+1;
	int n2=r-m;
	
	//creating copies
	int L[n1];
	int R[n2];
	
	for(i=0;i<n1;i++)
		L[i]=A[l+i];
	for(i=0;i<n2;i++)
		R[i]=A[m+1+i];
	
	i=0;j=0;k=l;
	while(i<n1 && j<n2)
	{
		if(L[i]<=R[j])
		{
			A[k]=L[i];
			i++;
		}
		else
		{
			A[k]=R[j];
			j++;
		}
		k++;
	}
	//rest of elements if any
	while(i<n1)
	{
		A[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		A[k]=R[j];
		j++;
		k++;
	}
	
}

int main()
{
	int n,i,A[MAX_SIZE];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	mergeSort(A,0,n-1);
	display(A,n);
	return 0;
}


























