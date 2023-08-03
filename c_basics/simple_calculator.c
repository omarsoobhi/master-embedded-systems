/*
 * simple_calculator.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٣
 *      Author: omar sobhy
 */


#include "stdio.h"

void main()


{
	float x,y,result;
	char symbol;
	printf("enter the 1st numbers ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &x );

	printf("enter operator either + or - or * or / ");
	fflush(stdin);fflush(stdout);
	scanf("%c", &symbol);

	printf("enter the 2nd numbers ");
	fflush(stdin);fflush(stdout);
	scanf("%f", &y );
	switch(symbol)
	{
	case '+':
		result = x+y;
		printf("the result of operation is %f ",result);
		break;
	case '-':
		result = x-y;
		printf("the result of operation is %f ",result);
		break;
	case '*':
		result = x*y;
		printf("the result of operation is %f ",result);
		break;
	case '/':
		result = x/y;
		printf("the result of operation is %f ",result);
		break;

	}


}
