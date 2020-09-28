//program to add two numbers using pointers
#include<stdio.h>
int main()
{
	int n1,n2;
	int *p1,*p2;
	int sum=0;	
	p1=&n1;
	p2=&n2;
	printf("Input two numbers:\n");
	scanf("%d %d",&n1,&n2);
	sum=*p1+*p2;
	printf("SUM=%d",sum);
}
	
