//This program showcases some math operators

#include <stdio.h>

main()
{
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    grade1 = grade3 = 88;
    grade2 = 79;

    printf("What did you get on the fourth test? ");
    printf("(enter an integer between 0 and 100)");
    scanf(" %d", &grade4);

    averageGrade = (grade1 + grade2 + grade3 + grade4) / 4;
    printf("Your average is %.2f.\n", averageGrade);

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95 - averageGrade) / 95);
    printf("Your grade is %.1f points lower than the top grade ", gradeDelta);
    printf("in the class (95).\n");
    printf("You are %.1f percent behind that grade!\n", percentDiff);

    return 0;
}
