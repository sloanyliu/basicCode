//this program showcases the ability of the conditional operator
//_____?_____:____;

#include <stdio.h>

main()
{
    int numPick;

    printf("Choose an integer number between 1 and 100.");
    scanf(" %d", &numPick);

    if (numPick <= 100)
    {
        printf("%d %s divisible by 2.\n", numPick, ((numPick % 2 == 0) ? ("is") : ("is not")));
        printf("%d %s divisible by 3.\n", numPick, ((numPick % 3 == 0) ? ("is") : ("is not")));
        printf("%d %s divisible by 4.\n", numPick, ((numPick % 4 == 0) ? ("is") : ("is not")));
        printf("%d %s divisible by 5.\n", numPick, ((numPick % 5 == 0) ? ("is") : ("is not")));
        printf("%d %s divisible by 6.\n", numPick, ((numPick % 6 == 0) ? ("is") : ("is not")));
        printf("%d %s divisible by 7.\n", numPick, ((numPick % 7 == 0) ? ("is") : ("is not")));
        printf("%d %s divisible by 8.\n", numPick, ((numPick % 8 == 0) ? ("is") : ("is not")));
        printf("%d %s divisible by 9.\n", numPick, ((numPick % 9 == 0) ? ("is") : ("is not")));
    }
    else
    {
        printf("Sorry that number is not valid.");
    }

    return 0;
}
