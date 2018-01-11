//This program showcases the functionalities of rand() and srand()
//This program is a dice-guessing game

#include <stdio.h>
#include <stdlib.h> //for the exit() function
#include <ctype.h>
#include <string.h>
#include <time.h>


main()
{
    int dice1, dice2;
    int total1, total2;
    time_t t; //This is calling on the time of the computer
    char ans, result, c1, playAgain;

    srand(time(&t)); //This is sending that into srand() to seed the rand()

    puts("Welcome to the Dice-Guessing game!\n");
    puts("Here are the rules:\n");
    puts("1) There are two dice that will be rolled every round, \n");
    puts("   the results of both die are added to form a total.\n");
    puts("2) You then guess whether the next total will be\n");
    puts("   Higher, Lower, or Equal, to the previous total.\n");
    puts("\n");

    do
    {
        puts("Ready to start the Game? (y/n)\n");
        scanf(" %c", &c1);

        if (c1 == 'y' || c1 == 'Y')
        {
            puts("Great! Lets get started!\n");
            break;
        }
        else
        {
            puts("It's ok, we can start when you are ready =)\n");
        }
    } while (!(c1 == 'y' || c1 == 'Y'));


    do
    {
        dice1 = ((rand() % 5)) + 1;
        dice2 = ((rand() % 5)) + 1;
        total1 = dice1 + dice2;
        puts("The die have been rolled!\n");
        printf("The first dice rolled a %d, and the second dice rolled a %d.\n", dice1, dice2);
        printf("\n");
        printf("Which makes the total: %d.\n", total1);

        do
        {
            puts("Time for you to guess, will the next total be: \n");
            puts("(H)igher than, (L)ower than, or (E)qual to the current total?\n");
            puts("Pick the letter that matches your choice! (H/L/E)\n");
            scanf(" %c", &ans);

            if ((toupper(ans) != 'H') && (toupper(ans) != 'L') && (toupper(ans) != 'E'))
            {
                puts("Please enter a valid choice!\n");
            }
            else
            {
                puts("Let's find out if you are right!\n");
                break;
            }
        } while ((toupper(ans) != 'H') && (toupper(ans) != 'L') && (toupper(ans) != 'E'));

        dice1 = ((rand() % 5)) + 1;
        dice2 = ((rand() % 5)) + 1;
        total2 = dice1 + dice2;

        //Comparing the totals to see the comparison
        if (total2 > total1)
        {
            result = 'H';
        }
        else if (total2 < total1)
        {
            result = 'L';
        }
        else
        {
            result = 'E';
        }

        //Checking to see if the result was what the player guessed
        if (toupper(ans) == result)
        {
            puts("Congratulations!! You guessed it right!\n");
        }
        else
        {
            puts("Sorry, your guess was wrong, better luck next time!\n");
        }

        printf("The second roll results were:\n");
        printf("The first dice rolled a %d, and the second dice rolled a %d.\n", dice1, dice2);
        printf("\n");
        printf("Which means the total is %d.\n", total2);

        puts("Would you like to play again? (y/n)\n");
        scanf(" %c", &playAgain);

        do
        {
            switch (toupper(playAgain))
            {
                case('Y') : puts("Awesome! Time for another round.\n");
                            break;

                case('N') : puts("See you next time!");
                            exit(0);

                default : puts("Please enter a valid choice.");
                          break;
            }

        } while(toupper(playAgain) != 'Y');


    } while (toupper(playAgain) == 'Y');

    return 0;

}
