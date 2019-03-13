#include <stdio.h>
#define MAXLINE 1000

int getline(char[], int);
void squeeze(char[], int);

main()
{
    char s[MAXLINE], c;
    getline(s, MAXLINE);
    printf("Char. to remove: ");
    c = getchar();
    squeeze(s, c);
    printf("%s\n", s);
}

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;
    for (i=0, j=0; s[i]!='\0';i++)
        if (s[i]!=c)
            s[j++] = s[i];
    s[j] = '\0';
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
