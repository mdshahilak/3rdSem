#include <stdio.h>
int main()
{
	int a[20],i,pos,n;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the element\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the position of element to be delete:");
	scanf("%d",&pos);
	n=n-1;
	for(i=pos-1;i<n;i++)
	a[i]=a[i+1];
	
	printf("Final array is\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	
	}
