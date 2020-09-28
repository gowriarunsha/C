//program to find all armstrong numbers within a range
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d",&num);
	int n,d,sum;
	d=0;sum=0;
	printf("List of armstrong numbers:\n");
	for(n=1;n<=num;n++)
	{
		int cpy=n;
		while(cpy>0)
		{
			d++;
			cpy/=10;
		}
		cpy=n;
		while(cpy>0)
		{
			sum+=pow((cpy%10),d);
			cpy/=10;
		}
		if(sum==n)
		printf("%d\n",n);
		d=0;
		sum=0;
		
	}
}
