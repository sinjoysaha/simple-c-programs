#include <stdio.h>
#define MAXLINE 1000
int strlen(char[]);

main()
{
    int i;
    char c[MAXLINE], s;

    for (i=0;i<MAXLINE-1;++i)
    {
        if ((s=getchar())==EOF)
            break;
        if (s=='\n')
        {
            c[i] = s;
            break;
        }
        c[i] = s;
        ++i;
    }
    if (s=='\n')
    {
        c[i] = s;
        ++i;
    }
    c[i] = '\0';
}
