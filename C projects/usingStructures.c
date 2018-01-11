//This program will showcase how to add stuff into structures and how
//they can be helpful during programming

//We are going to enter some information for some books

#include <stdio.h>
#include "structureExample.h"
//Contains the structure:
//struct bookInfo {
//    char title[40];
//    char author[25];
//    float price;
//    int pages;
//};

main()
{
    int ctr;

    struct bookInfo books[3]; //3 structures defined

    printf("Hello! Welcome to the book survey.\n");
    printf("We are going to ask you some basic information about your top 3 books.\n");

    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("What is the title of favorite book #%d? (one word titles!)\n", (ctr + 1));
        gets(books[ctr].title);

        printf("What about the author? (only the last name please)\n");
        gets(books[ctr].author);

        printf("And the price of the book? ($XX.XX)\n");
        scanf(" %f", &books[ctr].price);

        printf("Lastly, how many pages was this book?\n");
        scanf(" %d", &books[ctr].pages);

        getchar(); //DONT KNOW WHY THIS IS NEEDED BUT OKOK
                   //its for clearing the last enter so it does not get taken in as the title of the book
    }

    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("For favorite book number %d:\n", ctr + 1);
        printf("The title is: \"%s\"\n", books[ctr].title);
        printf("The author is: %s\n", books[ctr].author);
        printf("It cost $%0.2f\n", books[ctr].price);
        printf("And it had %d pages\n", books[ctr].pages);
    }

    return 0;
}
