/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,k=1,l=0;

	for(i=1;i<8;i++)
	{
		while(l<k)
		{
			printf(" ");
			l++;
		}
		for(j=k;j<8;j++)
		{
			printf("%d ",j);
		}
		k++;
		printf("\n");
		l=0;
	}

	k=6;
	for(i=2;i<8;i++)
	{
		while(l<k)
		{
			printf(" ");
			l++;
		}
		for(j=k;j<8;j++)
		{
			printf("%d ",j);
		}
		k--;
		printf("\n");
		l=0;
	}



	return 0;
}
