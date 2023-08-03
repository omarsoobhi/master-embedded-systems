/*
 * factorial.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٣
 *      Author: omar sobhy
 */

#include "stdio.h"

void main()
{
	int number ,factorial=1;
	int i;
	printf("enter a number to get its factorial \n");
	fflush(stdin);fflush(stdout);
	scanf("%d",&number);
	if(number<0)
	{
		printf("error!! Factorial of a negative number dosent exist");

	}
	else
	{
		for(i=number ; i>=1 ; i--)
		{
			factorial=factorial*i;
		}
		printf("the factorail of %d is %d",number,factorial);
	}
}
