#include<stdio.h>
int main()
{
	//define matrix
	int n;
	scanf("%d",&n);
	int A[n][(2*n-1)];
	int i;
	int j;
	//initializing all elements with 0
	for(i=0;i<n;i++)
	for(j=0;j<2*n-1;j++)
	A[i][j]=0;
	//filling in 1s
	int cl=n-1;int cr=n-1;
	
	for(i=0;i<n;i++)
	{
		A[i][cl]=1;
		A[i][cr]=1;
		cl--;
		cr++;
	}
	
	//filling others
	for(i=1;i<n;i++)
	for(j=1;j<2*n-2;j++)
	{
		cl=A[i-1][j-1];
		cr=A[i-1][j+1];
		
		if(cl!=0&&cr!=0)
		{
			A[i][j]=cl+cr;
		}
	}
	
	//printing
	for(i=0;i<n;i++)
	{
		for(j=0;j<2*n-1;j++)
			if(A[i][j]==0)
				printf(" ");
			else
				printf("%d",A[i][j]);
		printf("\n");
	}
	
}
