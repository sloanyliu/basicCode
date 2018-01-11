//This program will showcase pointers with arrays
//and arrays of pointers

//This program asks the user to rate five movies, then arranges the movies based in user rating and prints
//the ordered list from HIGHEST REVIEW to LOWEST REVIEW

#include <stdio.h>
#include <stdlib.h>

main()
{
    //The array movies holds 5 char pointer vars, each pointing at the starting element of each string
    //movies[0] --> 'I'
    //movies[1] --> 'D'
    //movies[2] --> 'A'
    //movies[3] --> 'A'
    //movies[4] --> 'T'
    char *movies[5] = {"Inception", "Dr.Strange", "Argo", "Avatar", "The Mummy"};
    int ratings[5];

    int ctr, tempRating, inner, outer;
    char c;
    char *tempMovie;

    printf("Hello, welcome to the 2011 Oscar Polls!\n");
    printf("Here are the 5 movies being nominated for the Oscars this year:\n");
    for(ctr = 0; ctr < 5; ctr++)
    {
        printf("-\"%s\"\n", movies[ctr]); //It's the pointer variable, notice there is no *
                                          //That's because %s knows how to get a pointer and stop at \0
                                          //if we put *movies[ctr], then it would just print: -"I"
    }

    printf("You will rate these movies on how much you liked them.\n");

    do
    {
        printf("Ready to start? (y/n)");
        scanf(" %c", &c);

        if(toupper(c) == 'Y')
        {
            printf("Let's Begin!\n");
            break;
        }
        else if(toupper(c) == 'N')
        {
            printf("Come again then!\n");
            exit(0);
        }
        else
        {
            printf("Please enter a valid choice.\n");
        }
    } while(toupper(c) != 'Y' && toupper(c) != 'N');

    //This loop asks for the ratings and saves them
    for (ctr = 0; ctr < 5; ctr++)
    {
        do
        {
            printf("What rating would you give %s? (1 - 10)\n", movies[ctr]);
            printf("Enter -1 if you have not seen the movie.\n");
            scanf(" %d", &tempRating);

            if(tempRating >= 1 && tempRating <= 10)
            {
                ratings[ctr] = tempRating;
            }
            else if (tempRating == -1)
            {
                printf("That's too bad.\n");
                ratings[ctr] = tempRating;
            }
            else
            {
                printf("Please enter a valid rating.\n");
            }
        } while((tempRating < 1 && tempRating != -1) || tempRating > 10);
    }

    for(outer = 0; outer < 4; outer++)
    {
        for(inner = outer; inner < 5; inner++)
        {
            if(ratings[outer] < ratings[inner])
            {
                tempRating = ratings[inner];
                ratings[inner] = ratings[outer];
                ratings[outer] = tempRating;

                tempMovie = movies[inner];
                movies[inner] = movies[outer];
                movies[outer] = tempMovie;
            }
        }
    }

    printf("Here is the list of movies ordered from Highest to Lowest rating:\n");
    for (ctr = 0; ctr < 5; ctr++)
    {
        printf("You gave %s a %d.\n", movies[ctr], ratings[ctr]);
    }

    printf("Thanks for your input! See you next year!\n");

    return 0;
}
