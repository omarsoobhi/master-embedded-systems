/*
 * even_odd_task.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٣
 *      Author: omar sobhy
 */


#include "stdio.h"

void main()
{
  int number;
  printf("please enter a random number:");
  fflush(stdin); fflush(stdout);
  scanf("%d",&number);
  if( number%2 == 0)
  {
    printf("%d is an even number",number);
  }
  else
  {
    printf("%d is an odd number",number);
  }

}

