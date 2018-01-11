//This program showcases the increment and decrement operators
// ++   --


#include <stdio.h>

main()
{
    int ctr = 0;
    int ctr2 = 0;

    printf("Counter is at %d.\n", ctr++); //0 is printed
                                          //THEN ctr increments cause ++ is postfix
                                          //ctr = 1

    printf("Counter is at %d.\n", ctr++); //1 is printed
                                          //THEN ctr increments cause ++ is postfix
                                          //ctr = 2

    printf("Counter is at %d.\n", ctr++); //2 is printed
                                          //THEN ctr increments cause ++ is postfix
                                          //ctr = 3

    printf("Counter is at %d.\n", ctr++); //3 is printed
                                          //THEN ctr increments cause ++ is postfix
                                          //ctr = 4

    printf("Counter is at %d.\n", ctr++); //4 is printed
                                          //THEN ctr increments cause ++ is postfix
                                          //ctr = 5

    printf("Counter is at %d.\n", ctr--); //5 is printed
                                          //THEN ctr decrements cause -- is postfix
                                          //ctr = 4

    printf("Counter is at %d.\n", ctr--); //4 is printed
                                          //THEN ctr decrements cause -- is postfix
                                          //ctr = 3

    printf("Counter is at %d.\n", ctr--); //3 is printed
                                          //THEN ctr decrements cause -- is postfix
                                          //ctr = 2

    printf("Counter is at %d.\n", ctr--); //2 is printed
                                          //THEN ctr decrements cause -- is postfix
                                          //ctr = 1

    printf("Counter is at %d.\n", ctr--); //1 is printed
                                          //THEN ctr decrements cause -- is postfix
                                          //ctr = 0

    printf("Counter is at %d.\n", ctr); //0 is printed

    printf("\n");

    //NOW USING THESE OPERATORS AS PREFIXES
    printf("Counter is at %d.\n", ctr2);
    printf("Counter is at %d.\n", ++ctr2);
    printf("Counter is at %d.\n", ++ctr2);
    printf("Counter is at %d.\n", ++ctr2);
    printf("Counter is at %d.\n", ++ctr2);
    printf("Counter is at %d.\n", ++ctr2);
    printf("Counter is at %d.\n", --ctr2);
    printf("Counter is at %d.\n", --ctr2);
    printf("Counter is at %d.\n", --ctr2);
    printf("Counter is at %d.\n", --ctr2);
    printf("Counter is at %d.\n", --ctr2);

    return 0;

}
