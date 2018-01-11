//This program showcases the effect of continue

#include <stdio.h>

main()
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);

        if (i % 2 != 0)
        {
            continue;
        }

        printf("This is an even number!\n");
    }

    return 0;
}
