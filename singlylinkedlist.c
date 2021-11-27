//program to impelement singly linked list functions
#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	struct Node* next;
};

struct Node* head=NULL;	//empty list
int listlength=0;

void insert()
{

	int x,pos,i;
	printf("List length=%d\nInput item to be inserted and position:",listlength);
	scanf("%d",&x);
	scanf("%d",&pos);
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node*));
	
	if(pos>listlength+1)
	{
		printf("Invalid position!\n");
		return;
	}
	temp->data=x;
	if(pos==1||head==NULL)
	{
		temp->next=head;
		head=temp;
		listlength++;
	}
	else
	{
		struct Node* temp1=head;
		for(i=0;i<pos-2;i++)
		{
			temp1=temp1->next;
		}
		temp->next=temp1->next;
		temp1->next=temp;
		listlength++;
		return;
	}
}
void deleteElement()
{
	int pos=0;
	printf("Input position of element to be deleted:");
	scanf("%d",&pos);
	if(pos>listlength)
	{
		printf("Invalid position!\n");
		return;
	}
	struct Node* temp=head;
	if(pos==1)
	{
		head=temp->next;
		free(temp);
		listlength--;
		return;
	}
	int i;
	for(i=0;i<pos-2;i++)
	{
		temp=temp->next;
	}
	struct Node *temp1=temp->next;	//nth node
	temp->next=temp1->next;
	listlength--;
	free(temp1);
	return;
	
}


int searchElement()
{
	int item, count=0;
	printf("Input item to be searched:");
	scanf("%d",&item);
	struct Node* temp=head;
	
	while(temp!=NULL)
	{
		count++;
		if(temp->data==item)
		{
			return count;
			
		}
		temp=temp->next;
	}
	
}
void display()
{
	struct Node* temp=head;

	if(head==NULL)
	{
		printf("Linked list is empty.\n");
		return;
	}
	printf("Linked list:");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
	return;
	
}

int main()
{
	int ch=0,r;
	printf("\t\t\tMENU\n1. Insert an element\n2. Delete an element\n3. Search for an element\n4. Display linked list\n5. Exit\n");
	do{
	printf("Input choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:insert();break;
		case 2:deleteElement();break;
		case 3:r=searchElement();
		if(r==0){printf("Element not found.\n");
		}
		else{printf("Element found in position %d\n",r);
		}break;
		case 4:display();break;
		case 5:printf("Exiting program...\n");break;
		default:printf("Invalid choice.\n");
	}
	}while(ch!=5);
	return 0;
}
