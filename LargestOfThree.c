//program to find biggest of three numbers
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	int b;
	scanf("%d%d%d",&n1,&n2,&n3);
	b=n1>n2?n1>n3?n1:n3:n2>n3?n2:n3;
	printf("Biggest number:%d\n",b);
	
}
