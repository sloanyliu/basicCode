//This program showcases basic math operators

#include <stdio.h>

main()
{
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19;
    int y = 5;
    int intAnswer;

    // float/float stored in float
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f.\n", a, b, floatAnswer);

    // int/int stored in float
    floatAnswer = x / y;
    printf("%d divided by %d equals %.1f.\n", x, y, floatAnswer);

    // float/float stored in int
    intAnswer = a / b;
    printf("%.1f divided by %.1f equals %d.\n", a, b, intAnswer);

    //using mod operator: % to calculate remainder
    intAnswer = x % y;
    printf("%d modulus %d equals %d.", x, y, intAnswer);

    return 0;
}
