//This program showcases the effects of switch case statements

//switch(expression)
//{
//  case(expression1) : do some stuff;
//  case(expression2) : do some stuff;
//  case(expression3) : do some stuff;
//  .
//  .
//  default : do some stuff;
//}

#include <stdio.h>
#include <stdlib.h>


main()
{
    int choice;

    printf("Have you ever wondered what text abbreviations mean these days?\n");
    printf("...well I do, so let's find out what some common ones mean!\n");
    printf("1) ROFL \n");
    printf("2) TBT \n");
    printf("3) WCW \n");
    printf("4) HML \n");
    printf("5) ASMR \n");
    printf("6) Exit the program.\n");

    do
    {
        printf("Enter the option number to find out what the abbreviation means.");
        scanf(" %d", &choice);

        switch (choice)
        {
            case (1) : printf("----ROFL stands for: \"Rolling On the Floor Laughing\"\n");
                       break; //These breaks just break out of the switch-case, not the do-while loop

            case (2) : printf("----TBT stands for: \"Throw Back Thursday\"\n");
                       break;

            case (3) : printf("----WCW stands for: \"Woman Crush Wednesday\"\n");
                       break;

            case (4) : printf("-----HML stands for: \"Hit My Line\"\n");
                       break;

            case (5) : printf("----ASMR stands for: \"Autonomous Sensory Meridian Response\"\n");
                       break;

            case (6) : printf("Thanks for joining me!\n");
                       exit(0); //This statement will terminate the program and return a 0
                                //That's why there is not a need a break; statement

            default : printf("That's not a valid answer, please enter a number from 1 to 6 =)\n");
        }
    } while (choice >= -10);
}
