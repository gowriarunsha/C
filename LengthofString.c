#include<stdio.h>
#define MAX 100000
int main()
{
	int len=0;
	int i;
	char s[MAX];
	printf("Input string:");
	scanf("%s",s);
	for(i=0;s[i]!="\0";i++)
	{
		len++;
	}
	printf("Length: %d",len);
}
