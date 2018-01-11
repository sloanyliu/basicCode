//This code will utilize the firstHeader.h file

#include <stdio.h>
#include <string.h>
#include "firstHeader.h" //HERE IT IS OMG

main()
{
    int age;
    char childname[14] = "Thomas";

    //using constants defined in the header file
    printf("\n%s have %d kids. \n", FAMILY, KIDS);

    age = 11;
    printf("The oldest, %s, is %d.\n", childname, age);

    /*You could do the below code to change the string, but it's safer to just use
    more strings*/
    //strcpy(childname, "Christopher")

    char childname2[14] = "Christopher";
    age = 6;
    printf("The middle boy, %s, is %d.\n", childname2, age);

    //strcpy works, but it's just easier to overlap unwanted String data
    strcpy(childname, "Benjamin");
    age = 3;
    printf("The youngest, %s, is %d.\n", childname, age);

    return 0;

}
