#include <stdio.h>
int main()
{
	int a[20],i,pos,n,v;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the position to insert the element:");
	scanf("%d",&pos);
	if(pos<=0 || pos>n)
	printf("Wrong Position");
	else
	{
	printf("Enter the element:");
	scanf("%d",&v);
	for(i=n-1;i>=pos-1;i--)
	a[i+1]=a[i];
	a[pos-1]=v;
	for(i=0;i<=n;i++)
	printf("%d\t",a[i]);
		}
	
	}
