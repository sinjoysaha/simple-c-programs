#include <stdio.h>
#define MAXLINE 1000 /* max input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest line */
main()
{
    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;
    while((len=getline(line, MAXLINE)) > 0)
    {
        if (len>max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max>0)
        printf("Longest Line: %s\n", longest);
    return 0;
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

/* copy: copy 'from' into 'to' */
void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
