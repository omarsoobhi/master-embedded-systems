/*
 * positive_or_negative.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٣
 *      Author: omar sobhy
 */

#include "stdio.h"

void main()
{
float x ;
printf("enter a number \n");
fflush(stdin);fflush(stdout);
scanf("%f",&x);
if(x>0)
{
	printf("%f is a positive number \n" ,x);
}
else
{
	printf("%f is a negative number" ,x);

}

}
