//This program showcases the if(){} else if(){} and else{}

#include <stdio.h>

main()
{
    int prefer;

    printf("On a scale of 1 to 10 (no decimals), how happy are you?\n");
    scanf(" %d", &prefer);

    if (prefer >= 8)
    {
        printf("Good for you!\n");
        printf("I'm glad things are going well =)");
    }
    else if (prefer >= 5)
    {
        printf("Better than average, right?\n");
        printf("Maybe things will get better!\n");
    }
    else if (prefer >= 3)
    {
        printf("Sorry you're not feeling well.\n");
        printf("I hope things get better soon!\n");
    }
    else
    {
        printf("I'm sure everything will get better and work out.\n");
        printf("Don't lose hope!\n");
    }

    return 0;
}
