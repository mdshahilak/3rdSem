#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	int choice=1;
	
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
	printf("\nDo you want to delete first node press 1 or else press 0:");
	scanf("%d",&choice);
	if(choice==1)
	{
		temp=head;
		head=temp->next;
		free(temp);
		printf("The updated linked list are:\t\n");
		temp=head;
		while(temp!=0)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
			}
		}
		else
		printf("No change in linked list");
}	
