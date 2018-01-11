//This program showcases the effects of pointers

//Every single data type has its data type pointer
//  * --> dereferencing operator, references the value held at that memory address
//  & --> channels memory address of any var it's put in front

#include <stdio.h>

main()
{
    int number;
    int * addressOf_number;

    float decimal;
    float * addressOf_decimal;

    char letter;
    char * addressOf_letter;

    number = 24;
    addressOf_number = &number; //assigned the address of number to addressOf_number

    decimal = 24.24;
    addressOf_decimal = &decimal; //assigned the address of decimal to addressOf_decimal

    letter = 'W';
    addressOf_letter = &letter; //assigned the address of letter to addressOf_letter

    printf("The variable number holds the value %d at address %d.\n", number, addressOf_number);
    printf("The variable decimal holds the value %0.2f at the address %d.\n", *addressOf_decimal, addressOf_decimal);
    printf("The variable letter holds the char %c at the address %d.\n", *addressOf_letter, addressOf_letter);

    return 0;
}
