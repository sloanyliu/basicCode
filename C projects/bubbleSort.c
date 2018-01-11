//This program is a demonstration of the Bubble sort
//I am going to sort a list of 10 values

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

main()
{
    int ctr, inner, outer, didSwap, temp, rep;
    int nums[10];
    char c, c2;
    time_t t;

    printf("Welcome to the Bubble Sort.\n");

    do
    {
        rep = 0;

        do
        {
            printf("Generate random numbers? (y/n)\n");
            scanf(" %c", &c);

            if (toupper(c) == 'Y')
            {
                break;
            }
            else if (toupper(c) == 'N')
            {
                puts("See ya!\n");
                exit(0);
            }
            else
            {
                printf("That's not a valid choice, please try again.\n");
            }
        } while(toupper(c) != 'Y' && toupper(c) != 'N');

        srand(time(&t));

        printf("Here are the numbers:\n");
        for(ctr = 0; ctr < 10; ctr++)
        {
            nums[ctr] = ((rand() % 99) + 1);
            printf("%d  ", nums[ctr]);
        }

        do
        {
            printf("\n");
            printf("Sort? (y/n)\n");
            scanf(" %c", &c2);

            switch(toupper(c2))
            {
                case('Y') : rep = 0;
                            break;

                case('N') : rep = 1;
                            break;

                default : printf("Please enter a valid choice.\n");
                          break;
            }
        } while(toupper(c2) != 'Y' && toupper(c2) != 'N');

    } while(rep == 1);

    //////////////////////////////////////////////////////////////////////////
    for(outer = 0; outer < 9; outer++)
    {
        for(inner = outer; inner < 10; inner++)
        {
            if(nums[outer] > nums[inner])
            {
                temp = nums[inner];
                nums[inner] = nums[outer];
                nums[outer] = temp;
            }
        }
    }
    ////////////////////////////////////////////////////////////////////////

    printf("Here is the sorted list:\n");
    for(ctr = 0; ctr < 10; ctr++)
    {
        printf("%d  ", nums[ctr]);
    }

    return 0;
}
