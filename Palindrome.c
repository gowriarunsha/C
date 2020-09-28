#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int cpy=n;
	//reversing number
	int rev=0;
	while(cpy>0)
	{
		rev=rev*10+cpy%10;
		cpy/=10;
	}
	if(rev==n)
	printf("%d is a Palindrome.",n);
	else
	printf("%d is not a Palindrome.",n);

}
