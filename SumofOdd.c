#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int c=0;
	int num=1;
	while(c<n)
	{
		if(num%2!=0)
		{
			printf("%d ",num);
			c++;
		}
		num++;
	}
	return 0;
}
