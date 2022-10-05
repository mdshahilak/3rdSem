#include <stdio.h>
#include <conio.h>
int main()
{
int a[20],n,i;
printf("enter the size of the array :");
scanf("%d",&n);
printf("enter the element into the array\n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf("The traversed array is\n");
for(i=1;i<=n;i++)
{
printf("The element at %dth position is %d\n",i,a[i]);
}
getch();
return 0;

}