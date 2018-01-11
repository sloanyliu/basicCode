//This program showcases logical operators

#include <stdio.h>
#define TICKET_PRICE 120.0

main()
{
    float wallet;
    char name[25];

    printf("How much money is in your wallet? (enter as $XXX.XX)\n");
    scanf(" $%f", &wallet);

    if (wallet >= TICKET_PRICE)
    {
        printf("Good, you have enough money!\n");

        printf("What is your last name? (please only enter the first 24 letters)\n");
        scanf(" %s", name);

        if (( (name[0] >= 'P') && (name[0] <= 'S') ) || ( (name[0] >= 'p') && (name[0] <= 's') ))
        {
            printf("Welcome! Please head to room 4232 to get your ticket, and enjoy the event!\n");
        }
        else
        {
            printf("Welcome! Please head to room 5656 to get your ticket, and enjoy the event!\n");
        }
    }
    else
    {
        printf("Sorry, you don't have enough money, thanks for your time!\n");
    }

    return 0;
}
