/*
 * sum_natural_nums.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٣
 *      Author: omar sobhy
 */


#include "stdio.h"


void main()

{
	int number ,sum=0;
	int i;
	printf("enter a number \n");
	fflush(stdin);fflush(stdout);
	scanf("%d" ,&number);

	for(i=0 ; i<=number; i++)
	{
		sum+=i;

	}
	printf("the sum of numbers from 0 to %d is %d" ,number,sum);
}
