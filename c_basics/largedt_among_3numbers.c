/*
 * largedt_among_3numbers.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٣
 *      Author: omar sobhy
 */

#include <stdio.h>

int main()
{
int x,y,z;
printf("enter 3 numbers u want to compare \n");
fflush(stdin);fflush(stdout);
scanf ("%d %d %d",&x,&y,&z );
if(x>y)
{
	if(x>z)
	{
		printf("%d is the biggest number",x);
	}
	else
	{
		printf("%d is the biggest number",z);

	}
}
if (y>x)
{
	if(y>z)
	{
		printf("%d is the biggest number",y);
	}
	else
	{
		printf("%d is the biggest number",z);

	}
}
}
