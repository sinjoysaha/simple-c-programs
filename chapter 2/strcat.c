#include <stdio.h>
#define MAXLINE 1000

int getline(char[], int);
void strcat(char[], char[]);

main()
{
    char s[MAXLINE], t[MAXLINE];
    printf("Enter 2 lines:\n");
    getline(s, MAXLINE*2);
    getline(t, MAXLINE);
    strcat(s, t);
    printf("%s\n", s);
}

/* strcat: conacatenate t to end of s */
void strcat(char s[], char t[])
{
    int i=0, j=0;
    while (s[i]!='\0')
        i++;
    while ((s[i++] = t[j++])!='\0')
        ;
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
