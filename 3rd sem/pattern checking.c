#include <stdio.h>
#include <string.h>
int main()
{
	int i,j,a,b;
	char str[20],ptn[10];
	printf("Enter the string:");
	gets(str);
	printf("Enter the string pattern to be check:");
	gets(ptn);
	a=strlen(str);
	b=strlen(ptn);                                                                          
	       
	for(i=0;i<=(a-b);i++)                       
	{                           
		for(j=0;j<b;j++)                      
		if(str[i+j] != ptn[j])                         
		 break;                  
			                      
		if(j==b)                                       
		printf("Pattern found at %dth intex and %dth position\n",i,i+1);	        
		        
		}                      
}                                                        
