//This program showcases how to allocate and deallocate memory from the Heap

//using malloc() and free()

//This program finds a random number of ints to allocate from the Heap
//Then it fills each of those ints with a number between 1 and 500
//Then it sorts it, finding the largest and smallest value

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    time_t t;
    int amount, ctr, inner, outer, temp;
    int *vals; //This is a int pointer variable

    srand(time(&t));

    printf("Welcome to the Heap tester!\n");
    printf("First, how many ints do you wish to allocate from the Heap? (Enter a positive integer)\n");
    scanf(" %d", &amount);

    vals = (int *) malloc(amount * sizeof(int)); //Allocated the amount of ints desired

    //Checking to see if there is enough Heap memory for our task
    if(vals == 0)
    {vals
        printf("Heap allocation failure, terminating program.\n");
        exit(0);
    }

    //Filling these allocated integers
    for(ctr = 0; ctr < amount; ctr++)
    {
        vals[ctr] = ((rand() % 499) + 1);
    }

    for(outer = 0; outer < amount - 1; outer++)
    {
        for(inner = outer; inner < amount; inner++)
        {
            if(vals[outer] > vals[inner])
            {
                temp = vals[inner];
                vals[inner] = vals[outer];
                vals[outer] = temp;
            }
        }
    }

    printf("Here is the sorted list of all the ints:\n");
    for(ctr = 0; ctr < amount; ctr++)
    {
        printf("%d\n", vals[ctr]);
    }

    printf("The largest one is %d and the smallest one is %d.\n", vals[amount - 1], vals[0]);

    //Freeing up the Heap memory
    free(vals);

    return 0;
}
