#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
int main()
{
	int choice=1;
	int i=1,pos=0;
	struct node *head=0,*newnode=NULL,*temp=0;
		while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the linked list elemnt:");
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
		printf("For continue entering data press 1 else 0");
		scanf("%d",&choice);
	}
	printf("The original linked list are:\t\n");
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	
	printf("\n\n To insert a element at the beginning, press 2.\nTo insert element at the end, press 3.\nTo insert a element in between the list, press 4.\n");
	scanf("%d",&choice);
	while(choice==2)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the inserting element at the beginning");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	printf("\nThe inserted  linked list is:\t");
	temp=head;
	while(temp!=0)
	{
		printf("%d \t",temp->data);
		temp=temp->next;
	}
	break;
	}
	while(choice==3)
	{
			newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the inserting number at the end of the list");
	scanf("%d",&newnode->data);
	temp=head;
	while(temp->next!=0)
	{
	 temp=temp->next;
	}
	
	temp->next=newnode;
	newnode->next=0;
	
	printf("The inserted linked list elements are :\t");
	temp=head;
	while(temp!=0)
	{
		
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	break;
	}
	
	while(choice==4)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the element you want to insert in the linked list:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	printf("\nEnter the position you want to insert the element:");
	scanf("%d",&pos);
	temp=head;
	while(i<pos)
	{
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
	
	printf("\nThe inserted linked list elements are:\t");
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	break;
	}
	
	while(choice>4)
	{
		printf("You entered an invalid number");
		break;
	}
	
	
	
}
