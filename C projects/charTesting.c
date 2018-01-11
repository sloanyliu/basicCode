//This program will showcase some char testing functions
//isupper()
//islower()
//isdigit()
//isaplha()

#include <stdio.h>
#include <string.h>
#include <ctype.h>


main()
{
    char first[30];
    char last[30];
    int choice, hasUp, hasLow, hasNum;
    char header[6];
    char user[26];
    char pass[100];

    //First get the name of the client
    printf("Welcome to Secure Browsing!\n");
    printf("What's your first name?\n");
    scanf(" %s", first);
    printf("And your last name?\n");
    scanf(" %s", last);

    printf("What prefix do you go by?\n");
    printf("1) Mr.\n");
    printf("2) Mrs.\n");
    printf("3) Ms.\n");

    do
    {
        printf("Please enter your choice (1 - 3).\n");
        scanf(" %d", &choice);

        switch(choice)
        {
            case(1) : strcpy(header, "Mr.");
                      break;

            case(2) : strcpy(header, "Mrs.");
                      break;

            case(3) : strcpy(header, "Ms.");
                      break;

            default : printf("Please enter a valid value!\n");
                      break;
        }
    } while(choice < 1 || choice > 3);

    //Now we are going to get the username
    printf("Welcome %s%s!\n", header, last);
    printf("We are going to need a username and a password from you.\n");
    printf("First, enter your username.\n");
    printf("It cannot be more than 25 characters long and cannot have spaces in it!\n");

    int happy = 0;
    while(happy == 0) //this loop is essentially an infinite loop
                      //But its ok because there is a break in the loop that will exit out
    {
        do
        {
            scanf(" %s", user);

            if (strlen(user) > 25)
            {
                printf("Sorry, the username is too long, try again.\n");
            }

        } while(strlen(user) > 25);

        printf("\n");
        printf("This is your username: %s, correct? (y/n)\n", user);
        char userRight;
        scanf(" %c", &userRight);
        if (userRight == 'Y' || userRight == 'y')
        {
            printf("Great!\n");
            break; //This is the ONLY way to exit out of the loop
        }
        else
        {
            printf("It's ok, enter the username you want.\n");
        }
    }


    //Now to get the password
    //I have nested while loops
    //The outer while loop ensure the user has the password he/she wanted
    //The inner while loop checks for password requirements
    printf("Now enter your password.\n");
    printf("There must be at least one uppercase letter, one lowercase letter, and one number. (Also no spaces!)\n");

    int happy2 = 0;
    while(happy2 == 0) //outer while loop
    {
        int i;
        hasUp = hasLow = hasNum = 0;
        while(!(hasUp && hasLow && hasNum)) //Inner while loop
        {
            scanf(" %s", pass);

            for(i = 0; i < strlen(pass); i++)
            {
                if(isupper(pass[i]))
                {
                    hasUp = 1;
                }

                if(islower(pass[i]))
                {
                    hasLow = 1;
                }

                if(isdigit(pass[i]))
                {
                    hasNum = 1;
                }
            }

            if(hasUp && hasLow && hasNum)
            {
                printf("Awesome! Your password meets all requirements.\n");
                break;
            }
            else
            {
                printf("Sorry, the password does not meet requirements, try again please!\n");
            }
        }

        printf("\n");
        printf("Is this the password you wanted: %s (y/n)", pass);

        char passRight;
        scanf(" %c", &passRight);
        if (passRight == 'Y' || passRight == 'y')
            {
                printf("Great!\n");
                break;
            }
            else
            {
                printf("It's ok, enter the password you wanted.\n");
            }
    }

    printf("Your username is: %s.\nYour password is: %s.\n", user, pass);
    printf("Please write down this information somewhere and keep it safe!\n");
    printf("Thank you for choosing Secure Browsing! Stay safe!\n");
}


