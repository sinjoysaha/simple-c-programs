#include <stdio.h>
#define MAXLINE 1000

int getline(char[], int);
void lower(char[]);

main()
{
    char s[MAXLINE];
    getline(s, MAXLINE);
    lower(s);
    printf("%s\n", s);
}
void lower(char s[])
{
    int i;
    for (i=0; s[i]!='\0'; i++)
        s[i] = (s[i]>='A'&&s[i]<='Z') ? (s[i]+'a'-'A') : s[i];
    s[i] = '\0';
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
