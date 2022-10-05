#include <stdio.h>
int main()
{
	int row ,col,i,j,a[10][10],element,flag=0;
	printf("Enter the number of row:");
	scanf("%d",&row);
	printf("Enter the number of column:");
	scanf("%d",&col);
	printf("Enter the elements:\n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&a[i][j]);
	printf("Entered matrix is:\n");
	for(i=0;i<row;i++)
	{
	for(j=0;j<col;j++)
	printf("%d\t",a[i][j]);
	printf("\n");
		}
	printf("Enter the element to be search:");
	scanf("%d",&element);
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	
		if(a[i][j]==element)	
		{
			printf("Enement is in the %dth row and %dth column\n",i+1,j+1);
			flag=1;
			}
		if(flag==0)
		{
			printf("Element not found");
			}
	}
