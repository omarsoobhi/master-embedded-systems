/*
 * alphabet.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٣
 *      Author: omar sobhy
 */
#include "stdio.h"

void main()
{
	char c;
	printf("please Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	if ((c >='a' && c<= 'z' )|| (c >='A' && c<= 'Z'))
	{
		printf("char you have entered is in alphabet");
	}
	else
		printf("char you have entered is not in alphabet");
}

