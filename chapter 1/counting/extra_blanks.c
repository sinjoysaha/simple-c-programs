#include <stdio.h>

/*replace string of one or more blanks by single blanks*/

main()
{
    int c, s, nb;
    while((c=getchar())!=EOF)
    {
        if(c != ' ')
            nb = 0;
        else
            ++nb;
        if(nb > 1)
            continue;
        else
            putchar(c);
    }
}
