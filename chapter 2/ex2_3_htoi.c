#include <stdio.h>
#define MAXLINE 1000

int getline(char[], int);
int htoi(char[]);

main()
{
    char s[MAXLINE];
    getline(s, MAXLINE);
    printf("%d\n", htoi(s));
}

/* htoi: convert hex to integer */
int htoi(char s[])
{
    int i, n=0;
    for (i=0; s[i]!='\0';++i)
        if (s[i]>='0' && s[i]<='9')
            n = 16 * n +(s[i]-'0');
        else if (s[i]>='A' && s[i]<='F')
            n = 16 * n +(s[i]-'A'+10);
        else if (s[i]>='a' && s[i]<='f')
            n = 16 * n +(s[i]-'a'+10);
    return n;
}
/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    else if (c != EOF)
    {
        printf("Maximum character limit exceeded.\n");
    }
    s[i] = '\0';
    printf("Length = %d\n", i);
    return i;
}
