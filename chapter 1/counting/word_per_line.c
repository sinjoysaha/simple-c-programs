#include <stdio.h>

/* prints input one word per line */
/*1st Version*/
main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(!(c == ' ' || c == '\t' || c == '\n'))
            putchar(c);
        else
            printf("\n");
    }
}
