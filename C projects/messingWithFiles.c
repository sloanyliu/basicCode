//This program showcases how to access and manipulate files

#include <stdio.h>
#include <stdlib.h>

FILE *fptr; //This is the file pointer

main()
{
    char line[200];
    char letter;
    int i;

    printf("We're going to create a file in the Extra Shiz folder.\n");

    //MAKING THE FILE
    fptr = fopen("C:\\Users\\Sloan Liu\\Desktop\\Extra_shiz\\yala.txt", "w");

    if(fptr == 0)
    {
        printf("You done goofed.\n");
        exit(0);
    }

    fprintf(fptr, "\nSo this is a new file...\n");
    fprintf(fptr, "Do you think someone can see me here?\n");
    fprintf(fptr, "Like me being here in a file and everything...\n");
    fprintf(fptr, "Oh well, it's not too bad, goodnight!\n");

    fclose(fptr);

    //ADDING TO THE FILE
    fptr = fopen("C:\\Users\\Sloan Liu\\Desktop\\Extra_shiz\\yala.txt", "a");

    if(fptr == 0)
    {
        printf("You done goofed.\n");
        exit(0);
    }

    fprintf(fptr, "\nI'm back!\n");
    fprintf(fptr, "I just wanted to add a few lines.\n");
    fprintf(fptr, "Ok well I'm good now, cya!\n");

    fclose(fptr);

    //READING THE FILE
    fptr = fopen("C:\\Users\\Sloan Liu\\Desktop\\Extra_shiz\\yala.txt", "r");

    if(fptr == 0)
    {
        printf("You goofed.\n");
    }

    while (feof(fptr) == 0)
    {
        fgets(line, 200, fptr);
        puts(line);
    }

    fclose(fptr);

    //SOME RANDOM ACCESS MESS
    fptr = fopen("C:\\Users\\Sloan Liu\\Desktop\\Extra_shiz\\yala.txt", "r+");

    if(fptr == 0)
    {
        printf("You goofed.\n");
    }

    for(letter = 'A'; letter <= 'Z'; letter++)
    {
        fputc(letter, fptr);
    }

    puts("wrote letters A thru Z to file.\n");

    fseek(fptr, 0, SEEK_SET);
    printf("Now I'm going to read it.\n");
    for(i = 26; i > 0; i--)
    {
        letter = fgetc(fptr); //Reads a letter
        fseek(fptr, 0.5, SEEK_CUR); //Backs up 2 bytes
        printf("The next letter is %c.\n", letter);
    }

    fclose(fptr);


    return 0;
}
