//This is a more practical example with math operators

#include <stdio.h>
#define SALESTAX 0.07

main()
{
    int numTires;
    float tirePrice, beforeTax, netSales;

    printf("How many tires did you purchase? ");
    scanf(" %d", &numTires);

    printf("How much was each tire? (enter as $XX.XX)");
    scanf(" $%f", &tirePrice);

    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);

    printf("\nYou spent $%.2f on your tires.\n", netSales);

    return 0;
}
