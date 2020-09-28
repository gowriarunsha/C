//Write a program in C  to display twin prime numbers from 1 to 100 using function. 
#include<stdio.h>
int isPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;	//not prime
		}
	}
	return 1;	//is prime
}

int main()
{
	int i;
	
	for(i=2;i<=98;i++)
	{
		if(isPrime(i)&&isPrime(i+2))
		{
			printf("(%d,%d)\n",i,(i+2));
		}
	}
	return 0;
}

