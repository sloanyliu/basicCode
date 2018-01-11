//This program showcases passing values to functions

#include <stdio.h>
#include <string.h>

main()
{
    int i = 10;
    int ctr;
    float x = 12.4;
    char name[15] = "Tom";
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("These are the OG values: %d, %0.2f, %s.\n", i, x, name);

    printf("Here is the array:\n");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d ", arr[ctr]);
    }

    printf("\n");
    printf("Time to change some of this.\n");

    change(i, &x, name, arr);

    return 0;
}

change(int i, float *x, char name[15], int arr[10])
{
    int ctr;
    i = i/2;
    *x = *x * 2;
    strcat(name, " Cruz");

    for(ctr = 0; ctr < 10; ctr++)
    {
        arr[ctr] = arr[ctr] * 2;
    }

    printf("The changed values are: %d, %0.2f, %s.\n", i, *x, name);

    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d ", arr[ctr]);
    }

    return;
}
