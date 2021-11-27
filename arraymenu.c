//program to create mdp with insertion, deletion, searching and displaying the array elements
#include<stdio.h>
#define MAX 100
void insert(int A[],int *n,int pos,int item)
{
	int i;
	int temp;
	for(i=pos;i<=*n;i++)
	{
		temp=A[i];
		A[i]=item;
		item=temp;
	}
	*n=*n+1;
}
void display(int A[],int n)
{
	int i;
	printf("Displaying Array:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
}
void deleteElement(int A[],int *n,int pos)
{
	int i;
	for(i=pos;i<*n-1;i++)
	{
		A[i]=A[i+1];
		
	}
	*n=*n-1;
}
void search(int A[],int n,int item)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(A[i]==item)
		{
			printf("Item found in position %d",i);
			return;
		}
	}
	printf("Item not found");
	return;
}
int main()
{
	int n,i,ch,pos,item;
	int A[MAX];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input elements in array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	do{
	printf("\t\t\tMENU\n1.Insertion of element\n2.Deletion of element\n3.Search for an element\n4.Display the array\n5.Exit\n");
	printf("Input your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Input element to be inserted and position:");
		scanf("%d %d",&item,&pos);
		insert(A,&n,pos,item);
		break;
		case 2:printf("Input position of element to be deleted:");
		scanf("%d",&pos);
		deleteElement(A,&n,pos);
		break;
		case 3:printf("Input item to be searched:");
		scanf("%d",&item);
		search(A,n,item);
		break;
		case 4:display(A,n);
		break;
		case 5:printf("Exiting program...");
		break;
		default:printf("Invalid choice!");
		
	}
	}while(ch!=5);
	
		
	
}


