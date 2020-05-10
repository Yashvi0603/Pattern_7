/*
	Name: c programe for print pattern
	INPUT = 4
	   1
	  1 2
	 1 2 3
	1 2 3 4
	 1 2 3
	  1 2
	   1
	
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,t,n;
	printf("Enter Number : "); 
	scanf("%d",&n);
	for(i=-n+1;i<n;i++)
	{
		t=n-abs(i);
		for(j=t;j<n;j++)
			printf(" ");
		for(j=1;j<=t;j++)
		{
			printf("%d ",j);			
		}	
		printf("\n");
	}
}
