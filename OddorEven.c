#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	oddoreven(n);
}
oddoreven(int n)
{
	if(n%2==0)
	printf("%d is even",n);
	else
	printf("%d is odd",n);
}
