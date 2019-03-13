#include <stdio.h>
#define MAXLINE 1000

int getline(char[], int);
int any(char[], char[]);

main()
{
    char s1[MAXLINE], s2[MAXLINE];
    getline(s1, MAXLINE);
    printf("Chars. to search: ");
    getline(s2, MAXLINE);
    printf("Location: %d\n", any(s1, s2));
}

/* any: return first location of char in s1 that matches char in s2 */
int any(char s1[], char s2[])
{
    int i, j, loc = -1;
    for (i=0; s1[i]!='\n';i++)
    {
        for (j=0; s2[j]!='\n';j++)
            if (s1[i]==s2[j])
                loc = i;
        if (loc!=-1)
            break;
    }
    return loc;
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
