#include <stdio.h>

/* count blanks, tabs, newlines in input */

main()
{
    int c, b, t, nl;
    b = t = nl = 0;
    while((c=getchar())!=EOF)
        if(c == '\n')
            ++nl;
        else if(c == '\t')
            ++t;
        else if(c == ' ')
            ++b;

    printf("No. of blanks: %d\n", b);
    printf("No. of tabs: %d\n", t);
    printf("No. of lines: %d\n", nl);
}
