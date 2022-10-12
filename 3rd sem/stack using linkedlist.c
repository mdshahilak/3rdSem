#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
	int data;
	struct node *next;
	};
	struct node *top=0;

void push()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	newnode->next =top;
	top=newnode;
	}
void pop()
{
	struct node *temp;
	temp=top;
	top=top->next;
	free(temp);
	}
void display()
{
	struct node *temp;
	temp=top;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		}
	}
void peek()
{
	if (top==0)
	printf("Stack is empty");
	else
	printf("%d",top->data);
	}
int main()
{
	int choice,dec;
	
	do
	{
		printf("\n\nPress 1\t:To insert a element to the stack. \nPress 2\t:To delete a element form the stack. \nPress 3\t:To display the elements of stack.\nPress 4\t:To peek the element.\n");
		
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:peek();
			break;
			default:printf("\nInvalide Choice");
			}
			
			printf("\n\nPress 0\t:Do you Stop operation.\nPress 1\t:Do you want to continue the operation.\n");
			scanf("%d",&dec);
		}while(dec==1);
	
	}

