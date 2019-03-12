#include <stdio.h>

int strlen(char[]);

main()
{
    char c[1000], s;
    int i = 0;
    while(i<1000-1 && (s=getchar())!=EOF && s!='\n')
    {
        c[i] = s;
        ++i;
    }
    if (s=='\n')
    {
        c[i] = s;
        ++i;
    }
    c[i] = '\0';
    printf("%d\n", strlen(c));
}

/* strlen: return length of s */
int strlen(char s[])
{
    int i;
    i = 0;
    while(s[i] != '\0')
        ++i;
    return i;
}
