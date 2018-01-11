//More code on for loops
//Asks about the movies and your rating

#include <stdio.h>
#include <string.h>

main()
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favorite[40], least[40];

    numMovies = 0;
    favRating = 0;
    leastRating = 10;

    while (numMovies < 1)
    {
        printf("How many movies have you watched this year?\n");
        scanf(" %d", &numMovies);

        if (numMovies < 1)
        {
            printf("You must've seen some movies this year.\n");
        }
    }

    for (ctr = 1; ctr <= numMovies; ctr++)
    {
        printf("What was one movie that you were thinking about? (one word movie names!)\n");
        scanf(" %s", movieName);

        printf("What rating would you give it? (1 - 10)\n");
        scanf(" %d", &rating);

        if (rating > favRating)
        {
            favRating = rating;
            strcpy(favorite, movieName);
        }

        if (rating < leastRating)
        {
            leastRating = rating;
            strcpy(least, movieName);
        }

    }

    printf("Your favorite movie this year was %s, with a rating of %d!\n", favorite, favRating);
    printf("Your least favorite movie this year was %s with a rating of %d.\n", least, leastRating);
}
