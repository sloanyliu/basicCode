//This program showcases the while() loop

#include <stdio.h>

main()
{
    int ctr = 0;

    while(ctr < 5) //this is only < 5 because we don;t want the ctr value to ever reach above 5
    {
        printf("Counter is at %d.\n", ctr++);
    }

    while(ctr >= 0)
    {
        printf("Counter is at %d.\n", ctr--);
    }
}
