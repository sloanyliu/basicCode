//This program showcases compound assignment operators

//it prints statements that shows a counter's value

#include <stdio.h>

main()
{
    int ctr = 0;

    printf("The counter is at %d.\n", ctr); //0

    ctr += 1;
    printf("The counter is at %d.\n", ctr); //1

    ctr += 1;
    printf("The counter is at %d.\n", ctr); //2

    printf("The counter is at %d.\n", ctr += 1); //3

    ctr += 1;
    printf("The counter is at %d.\n", ctr); //4

    printf("The counter is at %d.\n", ctr += 1); //5

    ctr -= 1;
    printf("The counter is at %d.\n", ctr); //4

    printf("The counter is at %d.\n", ctr -= 1); //3

    printf("The counter is at %d.\n", ctr -= 1); //2

    printf("The counter is at %d.\n", ctr -= 1); //1

    printf("The counter is at %d.\n", ctr -= 1); //0

    return 0;
}
