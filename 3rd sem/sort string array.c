#include<stdio.h>
#include<conio.h>
int main()
{
    char city[5][20];
    int i,j,num;
    printf("Enter the number of string you want to sort;");
    scanf("%d",&num);
    printf("Enter the Names to Sort: \n\n");
    for(i=0; i<num; i++)
        gets(city[i]);
    printf("Sorted list of Names are: \n\n");
    for(i=65; i<122; i++)
    {
        for(j=0; j<num; j++)
        {
            if(city[j][0]==i)
                printf("\n%s",city[j]);
        }
    }
}
