#include <stdio.h>
int main()
{
	int a[10],b[10],c[20],i,j,n,m;
	printf("Enter the size of first array:");
	scanf("%d",&n);
	printf("Enter the first array element\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("Enter the size of second array:");
	scanf("%d",&m);
	printf("Enter the second array element\n");
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	
	for(j=0,i=0;i<n;j++,i++)
	{
		c[j]=a[i];
		}
	for(j=n,i=0;i<n;j++,i++)
	{
		c[j]=b[i];
		}
	for(j=0;j<(n+m);j++)
	printf("%d\t",c[j]);
	
	}
