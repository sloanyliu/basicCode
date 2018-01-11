//This program shows how to make functions return values

#include <stdio.h>

float func(float x, float y);

main()
{
    float x, y, avg;
    printf("Enter one floating point number.\n");
    scanf(" %f", &x);
    printf("Enter another floating point number.\n");
    scanf(" %f", &y);

    avg = func(x, y);

    printf("The average of these two numbers is: %0.2f.\n", avg);
    return 0;
}

float func(float x, float y)
{
    float average;
    average = (x + y) / 2.0;
    return (average);
}
