/*
 ============================================================================
 Name        : task2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void main()
{
    char letter;
    printf("Enter an alphabet: ");
    fflush(stdin);fflush(stdout); // Avoid using fflush(stdin); on some systems, it may not work as expected.
    scanf("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("The letter you have entered (%c) is a vowel letter.\n", letter);
    }
    else
    {
        printf("The letter you have entered (%c) is a consonant letter.\n", letter);
    }

}
