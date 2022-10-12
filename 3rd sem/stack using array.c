#include <stdio.h>
#define max 5
int stack[50],top=-1;
void push()
{
	int x;
	
	if (top==max-1)
	printf("Stack overflow");
	else{
		printf("Enter the element:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
		}
}
void pop()
{
	if (top==-1)
	printf("Stack is empty");
	else
	top--;
	}
void display()
{
	int i;
	printf("The stack is:");
	for(i=top;i>=0;i--)
	printf("%d\t",stack[i]);
	printf("\n");
	}
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty");
		}
		else
		printf("%d",stack[top]);
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
