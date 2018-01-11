//This program will showcase some numerical arrays and how to use them

//This is a basketball game score displayer

#include <stdio.h>


main()
{
    int scores[10] = {12, 5, 21, 15, 32, 10}; //Already have the scores for 6 games
    int whatif[10] = {0}; //Gonna use this to let the user enter 10 score projections
    int total, whatifTotal;
    int i;
    float avg, avg2;

    puts("Welcome to the Basketball score corner!\n");
    printf("You have already played 6 games this season, enter the rest of the scores.\n");

    for (i = 6; i < 10; i++)
    {
        printf("What is the score of game number %d?\n", i+1); //The i + 1 is because the game number
                                                               //and loop index are different by 1
        scanf(" %d", &scores[i]);
    }

    total = whatifTotal = 0; //initializing to avoid errors

    for (i = 0; i < 10; i++)
    {
        total += scores[i];
    }

    avg = total / 10;

    puts("Here is your performance this season:\n");
    for (i = 0; i < 10; i++)
    {
        printf("On game number %d of this season, you scored %d points.\n", i + 1, scores[i]);
    }

    printf("Your average for the 10 games this season is: %0.2f.\n", avg);

    printf("Based on the scores for this season, do you have a projection of what you might score on the ");
    printf("10 games next season?.\n");

    for (i = 0; i < 10; i++)
    {
        printf("What do you think you will score on game number %d next season?\n", i + 1);
        scanf(" %d", &whatif[i]);
        whatifTotal += whatif[i];
    }

    avg2 = whatifTotal / 10;

    puts("Here is your projected performance of next season:\n");
    for (i = 0; i < 10; i++)
    {
        printf("On game number %d of next season, you think you can score %d points.\n", i + 1, whatif[i]);
    }

    printf("Your average for the 10 games next season is: %0.2f.\n", avg2);

    puts("Thanks for joining us, see you next time!");

    return 0;
}
