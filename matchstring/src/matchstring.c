/*
 ============================================================================
 Name        : matchstring.c
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
	char str1[50], str2[50];
	int l1 = 0;;
	int i;
	int j =0;

	printf("Enter the String : ");
	fflush(stdout);
	scanf("%s",str1);

	printf("Enter the Substring : ");
	fflush(stdout);
	scanf("%s",str2);


	l1 = strlen(str1);

	for(i=0;i<l1;i++)
	{
		if(str1[i]==str2[j])
		{
			j++;
		}
		else
		{
			j=0;
		}
	}

	printf("Substring %s present at %d",str2,i-j);

	return 0;
}
