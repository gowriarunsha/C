//program to input and print array elements using pointer.
#include<stdio.h>
#define MAX 25
int main()
{
	int n,i;
	int A[MAX];
	int *p;
	p=&A[0];
	printf("Input number of elements in array:");
	scanf("%d",&n);
	//inputting elements
	for(i=0;i<n;i++)
	{
		scanf("%d",p);
		p++;
	}
	p=&A[0];
	//printing elements
	printf("Elements of the array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*p);
		p++;
	}
	return 0;
}
