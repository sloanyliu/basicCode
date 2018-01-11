//This program searches parallel arrays

//This program checks for a customerID and sees if that customer owes too much

#include <stdio.h>
#include <stdlib.h>

main()
{
    int ctr;
    int searchID;
    int found = 0;
    int repeat = 0;
    char choice;

    int id[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float debt[10] = {0.0, 12.2, 23.4, 145.33, 87.6, 35.8, 44.9, 102.33, 45.66, 67.35};

    do
    {
        do
        {
            found = 0; //Setting the value right to avoid errors
            printf("What is the customer ID you wish to search for?\n");
            scanf(" %d", &searchID);

            for (ctr = 0; ctr < 10; ctr++)
            {
                if (searchID == id[ctr])
                {
                    found = 1;
                    break;
                }
            }

            if(found == 1)
            {
                break;
            }
            else
            {
                found = 0;
                printf("The ID %d is not a valid ID, please try again.\n", searchID);
            }
        } while (found == 0);

        printf("The customer with id %d owes $%0.2f.\n", searchID, debt[ctr]); //the index for debt[] has to be ctr because
                                                                               //searchID is one more than index

        do
        {
            printf("Would you like to search for another customer? (y/n)\n");
            scanf(" %c", &choice);

            switch(toupper(choice))
            {
                case('N') : printf("See you next time!\n");
                            exit(0);

                case('Y') : repeat = 1;
                            break;

                default : printf("That's not a valid choice, try again.\n");
                          break;
            }
        } while((toupper(choice) != 'Y') && (toupper(choice) != 'N'));
    } while(repeat == 1);

    return 0;


}
