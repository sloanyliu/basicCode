//This program sorts a list of customer ID's and checks for balance

#include <stdio.h>

main()
{
    int id[10] = {10, 5, 2, 4, 3, 7, 8, 9, 6, 1};
    int debt[10] = {123, 423, 645, 143, 890, 765, 365, 823, 413, 133};
    int inner, outer, temp, temp2, searchID;
    char c;

    for(outer = 0; outer < 9; outer++)
    {
        for(inner = outer; inner < 10; inner++)
        {
            if(id[outer] > id[inner])
            {
                temp = id[inner];
                id[inner] = id[outer];
                id[outer] = temp;

                temp2 = debt[inner];
                debt[inner] = debt[outer];
                debt[outer] = temp2;
            }
        }
    }

    do
    {
        do
        {
            printf("Which customer do you want to look up?\n");
            scanf(" %d", &searchID);

            if (searchID < 1 || searchID > 10)
            {
                printf("Sorry, enter a valid ID.\n");
            }
        } while (searchID < 1 || searchID > 10);

        printf("Customer number %d owes $%d.\n", searchID, debt[searchID - 1]);

        do
        {
            printf("Do you want to look up another customer? (y/n)\n");
            scanf(" %c", &c);

            switch(toupper(c))
            {
                case('Y') : break;

                case('N') : exit(0);

                default : printf("Please enter a valid choice!\n");
                          break;
            }
        } while(toupper(c) != 'Y' && toupper(c) != 'N');
    } while(toupper(c) == 'Y');

    return 0;
}
