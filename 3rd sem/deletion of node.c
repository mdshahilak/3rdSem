#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
	{
     int data;
     struct node *next;
		};
struct node *head,*newnode,*temp,*previousnode,*nextnode;		
void delbegin();
void delend();
void delbetw();
int main()
{
	
	
	int count=0;
	int choice=1;
	head=0;
	while(choice)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter the data into the node\n");
		scanf("%d",&newnode->data);
		newnode->next=0;

		if(head==0)
		{
			head=temp=newnode;
			}else
			{
				temp->next=newnode;
				temp=newnode;
				}
				printf("do you want to continue");
				scanf("%d",&choice);
			}
				temp=head;
				while(temp!=0)
				{
					printf("%d=>",temp->data);
					count++;
					temp=temp->next;
					}
					printf("count is %d",count);
					printf("to delete item from begin press 1,to delete item from end press 2,to delete item from between press 3");
				   printf("enter the choice");
				   scanf("%d",&choice);
				   switch(choice)
				   {
					   case 1:delbegin();
				             break;
				       case 2:delend();
				              break;
				      case 3:delbetw();
					         break;
					  default:
					         
					          printf("invalid choice"); 
					     
					}
				}
				
	void delbegin()
	{   struct node *temp;
		temp=head;
				head=head->next;
				free(temp);
				
				
				
				temp=head;
				while(temp!=0)
				{
					printf("%d=>",temp->data);
				
					temp=temp->next;
					}
		}
	
		void delend()
		{temp=head;
	    while(temp->next!=0)
			{
				previousnode=temp;
				temp=temp->next;}
				if(head==temp)
				{
					head=0;}
					else{
						previousnode->next=0;}
						free(temp);
						
						
						
				temp=head;
				while(temp!=0)
				{
					printf("%d=>",temp->data);
				
					temp=temp->next;
					}
						
			}
			
			void delbetw()
			{int pos,i=1;
				printf("enter the position");
				scanf("%d",&pos);
				temp=head;
				while(i<pos-1)
				{temp=temp->next;
					i++;
					
					}
				nextnode=temp->next;
				temp->next=nextnode->next;
				free(nextnode);
						
				temp=head;
				while(temp!=0)
				{
					printf("%d=>",temp->data);
				
					temp=temp->next;
					}
				
				}
