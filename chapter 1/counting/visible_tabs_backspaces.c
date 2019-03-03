#include <stdio.h>

/*replace each tab by \ t, each backspace
by \b, and each backslash by \\.*/

main()
{
    int c;
    while((c=getchar())!=EOF)
    {
        if(c == '\t')
            printf("\\t");
        else if(c == '\b')
            printf("\\b");
        else if(c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}
