/*just some simple code that uses addition and printing stuff*/
/*from the Beginner's guide to C programming*/
/*Sloan Liu*/

#include <stdio.h>

main()
{
    float gift1, gift2, gift3, gift4, gift5; //all the gifts
    float total;

    printf("How much do you want to spend on Mom?");
    scanf(" %f", &gift1); //expects a float, and stores it into gift1
    printf("How much do you want to spend on Dad?");
    scanf(" %f", &gift2); //still don't know why the space in front of the %f....maybe for formatting?
    printf("How much do you want to spend on your Sister?");
    scanf(" %f", &gift3);
    printf("How much do you want to spend on your Brother?");
    scanf(" %f", &gift4);
    printf("How much do you want to spend on your <3?");
    scanf(" %f", &gift5);

    total = gift1 + gift2 + gift3 + gift4+ gift5;
    printf("\nThe total you will spend this Christmas on gifts is %.2f", total);
    return 0; //This is just to end the program, not sure if its completely necessary
}
