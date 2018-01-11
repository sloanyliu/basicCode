//This program showcases the do...while loop

//This will ask the user for two numbers, then multiply them
//It will repeat this process until the user answers 'n' or 'N'

#include <stdio.h>

main()
{
    float num1, num2, result;
    char choice;

    printf("Welcome to the Multiplier x(^_^)x\n");
    printf("It will multiply the two numbers that you enter!\n");
    printf("Decimal numbers are welcome!\n");
    printf("\n");

    do
    {
        printf("What's your first number?");
        scanf(" %f", &num1);

        printf("What's your second number?");
        scanf(" %f", &num2);

        result = num1 * num2;
        printf("The result is %.2f.\n", result);

        printf("Do you wish to enter another pair of numbers? (Y/N)");
        scanf(" %c", &choice);
        printf("\n");

        while ((choice != 'y' && choice != 'n') && (choice != 'Y' && choice != 'N'))
        {
            printf("Haha, that's not a valid answer, try again!\n");
            printf("Do you wish to enter another pair of numbers? (Y/N)");
            scanf(" %c", &choice);
            printf("\n");
        }

        if (choice == 'n')
        {
            choice = 'N';
        }

    } while (choice != 'N');

    printf("Thanks for using the Multiplier x(^_^)x! See you next time!\n");

    return 0;
}
