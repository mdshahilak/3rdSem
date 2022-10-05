#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next,*head;
};
int search();
int main()
{
	int choice=1,intex,item;
	
	struct node *head=0,*newnode=NULL,*temp=0;
		while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the linked list element:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==0)
		{
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=temp->next;
		}
		printf("For continue entering data press 1 else 0:");
		scanf("%d",&choice);
	}
	printf("The entered linked list are:\t\n");
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("Enter the item to be search:");
	scanf("%d",&item);
	
	intex=search(head,item);
	if(intex!=-1)
	printf("Element is found in the position %d.",intex);
	else
	printf("Element is not found");
	
	}
	
	int search(struct node *head,int item)
	{
		struct node *temp;
		int pos=1;
		
		if(head==0)
		printf("List is empty");
		else {
		temp=head;
		while(temp!=0)
		{
			if(temp->data==item)
			return pos;
			else{
			temp=temp->next;
			pos++;}
			}
			return -1;
				}
		
		}
