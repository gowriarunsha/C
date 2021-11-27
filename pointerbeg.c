//program to create, initialize and use pointers.
#include<stdio.h>
int main()
{
	int n;
	int *p;	//creating pointer
	p=&n;	//initializing pointer
	printf("Input a number:");
	scanf("%d",p);	//p stores adress of n
		
	printf("Number:%d\tAdress:%d",*p,p);
	
	
}
