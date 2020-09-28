//Write a program in C to do the string reversal. 
#include<stdio.h>
#define MAX 20
int main()
{
	int i=0;
	char str[MAX];
	char rev[MAX];
	printf("Input string:");
	scanf("%s",str);
	int len=findlen(str);
	int j=0;
	for(i=len-1;i>=0;i--)
	{
		rev[j]=str[i];
		j++;
	}
	printf("Reversed string:%s",rev);
}
int findlen(char str[])
{
	int len=0;
	int i=0;
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	return len;
}
