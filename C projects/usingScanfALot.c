//Showcases scanf() capabilities

#include <stdio.h>

main()
{
    char topping[24];
    int slices;
    int month, day, year;
    float cost;

    printf("How much does a pizza cost in your area?");
    printf("(enter as $XX.XX)\n");
    scanf(" %f", &cost); //asks the user for a fp and stores it into cost

    printf("What is your favorite one-word pizza topping?\n");
    scanf(" %s", topping); //asks the user for a str, so no & needed

    printf("How many slices of %s pizza can you eat in one sitting?\n", topping);
    scanf(" %d", &slices);

    printf("What is today's date? (enter as XX/XX/XX)\n");
    scanf(" %d/%d/%d", &month, &day, &year); //asking the user for multiple ints

    printf("\n\nWhy not treat yourself to dinner on %d/%d/%d", month, day, year);
    printf("\nand have %d slices of %s pizza!\n", slices, topping);
    printf("It will only cost $%.2f!\n", cost);

    return 0;
}
