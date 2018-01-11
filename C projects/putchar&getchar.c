//This program will showcase the functions of putchar(), getchar(), and strlen()

//Whatever string you enter, the program prints it backwards

#include <stdio.h>
#include <string.h>


main()
{
    int i;
    int weird2;
    char weird[] = "                         "; //This was put here to test the effects of strlen()
    char msg[25];

    printf("Type up to 25 chars and press enter.\n");

    for(i = 0; i < strlen(weird); i++)
    {
        msg[i] = getchar();

        if (msg[i] == '\n') //When the user presses ENTER, stop reading chars
        {
            i--; //Doing this because the ENTER is not a part of the String we entered
            break;
        }
    }
    putchar('\n');
    weird2 = i; //this is extra af, just using it to prove a point to myself

    for(i = weird2; i >= 0; i--)
    {
        putchar(msg[i]);
    }
    putchar('\n');

    return 0;
}
