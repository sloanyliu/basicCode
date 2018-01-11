//This program further showcases array traversing

//This program is going to search through one array and display information
//from all three arrays based on the corresponding index

#include <stdio.h>
#include <stdlib.h>

main()
{
    int score[10] = {12, 5, 4, 23, 7, 14, 56, 2, 19, 30};
    int res[10] = {1, 3, 2, 3, 4, 1, 0, 3, 1, 3};
    int threes[10] = {0, 1, 0, 2, 2, 0, 4, 0, 0, 1};

    int ctr, game;
    char choice;

    do
    {
        do
        {
            printf("Which game are you interested in?\n");
            scanf(" %d", &game);

            if(game < 0 || game > 10)
            {
                printf("Sorry that game does not exist");
            }

        } while (game < 0 || game > 10);

        printf("During game number %d: \n", game);
        printf("This player scored %d points, had %d rebounds, and made %d three-pointers.\n", score[game - 1], res[game - 1], threes[game - 1]);

        do
        {
            printf("Would you like to see results for another game? (y/n)\n");
            scanf(" %c", &choice);

            switch(toupper(choice))
            {
                case('Y') : break;

                case('N') : printf("See you next time!\n");
                            exit(0);

                default : printf("That's not a valid choice\n");
                          break;
            }
        } while(toupper(choice) != 'Y' && toupper(choice) != 'N');
    } while(toupper(choice) == 'Y');

    return 0;
}
