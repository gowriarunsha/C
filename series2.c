//program to find sum of series 1!/1+2!/2+3!/3+4!/4+5!/5 using  functions
#include<stdio.h>
int main()
{
	int i;
	float f;
	float sum=0;
	for(i=1;i<=5;i++)
	{
		f=fact(i);
		sum+=f/i;
	}
	printf("SUM=%f",sum);
	return 0;
}
int fact(int n)
{
	int f=1;
	while(n>0)
	{
		f*=n;
		n--;
	}
}
