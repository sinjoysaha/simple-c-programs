#include <stdio.h>
#define MAXLINE 1000

int getline(char[], int);
void squeeze(char[], char[]);

main()
{
    char s1[MAXLINE], s2[MAXLINE];
    getline(s1, MAXLINE);
    printf("Chars. to remove: ");
    getline(s2, MAXLINE);
    squeeze(s1, s2);
    printf("%s\n", s1);
}

/* squeeze: delete char from s1 that matches s2 */
void squeeze(char s1[], char s2[])
{
    int i, j, k, flag;
    for (i=0,j=0; s1[i]!='\0';i++)
    {
        flag = 1;
        for (k=0; s2[k]!='\0';k++)
        {
            if (s1[i]==s2[k])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
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
