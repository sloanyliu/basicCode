//Program with nested for loops

#include <stdio.h>

main()
{
    int outer, inner;

    for (outer = 0; outer <= 5; outer++)
    {
        for(inner = 5; inner >= 0; inner--)
        {
            printf("%d ", inner);
        }

        printf("\n");
    }
}
