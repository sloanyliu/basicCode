//This program showcases the effects of break

#include <stdio.h>

main()
{
    int numTest, numStudents;
    float stTest, avg, total;

    total = 0.0;

    printf("How many students are in your class?");
    scanf(" %d", &numStudents);

    for (numTest = 0; numTest < numStudents; numTest++)
    {
        printf("\nWhat is one student's test score? (enter as XX.XX)");
        scanf(" %f", &stTest);

        if (stTest < 0)
        {
            printf("Now calculating average.\n");
            break;
        }

        total += stTest;
    }

    avg = total / numTest;

    printf("\nThe average test score for your class is %.2f.", avg);

    return 0;
}
