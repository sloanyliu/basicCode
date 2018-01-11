//This program shows off gets() and puts() and strcat()

#include <stdio.h>
#include <string.h>

main()
{
    char city[25];
    char state[3];
    char fullLocation[30] = "";

    puts("What town do you live in?");
    gets(city);

    puts("What state do you live in? (2 letter abbreviation)");
    gets(state);

    strcat(fullLocation, city);
    strcat(fullLocation, ", ");
    strcat(fullLocation, state);

    puts("\nYou live in ");
    puts(fullLocation);

    return 0;
}
