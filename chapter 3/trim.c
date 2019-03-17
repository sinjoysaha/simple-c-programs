#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int getlinesfrom(char[], int);
int trim(char[]);

int main(void)
{
    char s[MAXLINE];
    printf("Enter string: ");
    getlinesfrom(s, MAXLINE);
    trim(s);
    printf("Trimmed: %s.\n", s);
    return 0;
}
/* trim: remove trailing spaces */
int trim(char s[])
{
    int n;
    for (n=strlen(s)-1; n>=0; n--)
        if (s[n]!=' ' && s[n]!='\t' && s[n]!='\n')
            break;
    s[n+1] = '\0';
    return n;
}

int getlinesfrom(char s[], int lim)
{
    int c, i;
    for (i=0; i<lim-1 && (c=getchar())!=EOF; ++i)
        s[i] = c;

    if (c != EOF)
    {
        printf("Maximum character limit exceeded.\n");
    }
    s[i] = '\0';
    printf("Length = %d\n", i);
    return i;
}
