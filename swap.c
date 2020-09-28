//program to swap two numbers using pointers
#include<stdio.h>
int main()
{
	int n1,n2,*p1,*p2;
	p1=&n1;
	p2=&n2;
	printf("Input two numbers:");
	scanf("%d %d",p1,p2);
	int temp;
	//swapping
	temp=*p1;
	*p1=*p2;
	*p2=temp;
	printf("Numbers are %d and %d",*p1,*p2);
}
