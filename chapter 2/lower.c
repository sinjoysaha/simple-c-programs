#include <stdio.h>
#define MAXLINE 1000

int getline(char[], int);
void lowers(char[]);
int lowerc(int);
void lower(char[]);

main()
{
    char s[MAXLINE];
    getline(s, MAXLINE);
    lowers(s);
    printf("%s\n", s);

    getline(s, MAXLINE);
    lower(s);
    printf("Char to int conv: %s\n", s);
}

/* lowers: convert s to lower case */
void lowers(char s[])
{
    int i;
    for (i=0; s[i]>='A' && s[i]<='Z';++i)
        s[i] = s[i] + 32;
}
/* lowerc: convert c to lower case */
int lowerc(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c+'a'-'A';
    else
        return c;
}

void lower(char s[])
{
    int i = 0;
    while(s[i]!='\0')
    {
        s[i] = lowerc(s[i]);
        ++i;
    }
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
