#include <stdio.h>
int main()
{
	int m[20][20],i,j,row,col,size=0;
	printf("enter the number of row:");
	scanf("%d",&row);
	printf("enter the number of column:");
	scanf("%d",&col);
	printf("the sparcs matrix is\n");
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	scanf("%d",&m[i][j]);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		printf("%d\t",m[i][j]);
		printf("\n\n");
		
		}
	
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	if(m[i][j]!=0)
	size++;
	
	int k=0,comp[3][size];
	
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
	if(m[i][j]!=0)
	{
		comp[0][k]=i;
		comp[1][k]=j;
		comp[2][k]=m[i][j];
		k++;
		}
	for(i=0;i<3;i++)
	{
		for(j=0;j<k;j++)
		printf("%d\t",comp[i][j]);
		printf("\n");
		}
	

}
