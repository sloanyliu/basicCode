#include <stdio.h>


main()
{
    int ctr, pages;
    char author[20];
    char title[20];
    float price;

    for(ctr = 0; ctr < 3; ctr++)
    {
        printf("title?\n");
        scanf(" %s", title);
        printf("author?\n");
        scanf(" %s", author);
        printf("price?\n");
        scanf(" %f", &price);
        printf("pages?\n");
        scanf(" %d", &pages);
        //getchar();
    }
}
