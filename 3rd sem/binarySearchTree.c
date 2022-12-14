//5. Search an element in the array using binary search.
#include <stdio.h> 
int main() 
{ 
    int arr[20],i,n,item,l=0,result=-1,r;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
    printf("Enter the item to be searched: ");
    scanf("%d",&item);
    r=n-1;
    while (l <= r) { 
        int m = (l+r)/2; 
   
        if (arr[m] == item) 
            result=m; 
   
        if (arr[m] < item) 
            l = m + 1; 
        else
            r = m - 1; 
    } 
    if(result == -1)
        printf("Element not found in array");
    else
        printf("Element found at position %d",result+1);

}
