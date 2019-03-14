#include <stdio.h>
#define MAXLINE 1000

void revescape(char[], char[]);
void escape(char[], char[]);
int getline(char[], int);

main()
{
    char s[MAXLINE], t[MAXLINE];
    printf("Real chars to escape sequences: ");
    getline(t, MAXLINE);
    escape(s, t);
    printf("%s\n", s);

    printf("\nEscape sequences to real chars: ");
    getline(s, MAXLINE);
    revescape(t, s);
    printf("Escape sequences:\n%s\n", t);
    return 0;
}
/* escape: char to escape sequences */
void escape(char s[], char t[])
{
    int i, j;
    for(i=0, j=0; t[i]!='\0';i++)
    {
        switch(t[i])
        {
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            default:
                s[j++] = t[i];
                break;
        }
    }
    s[j] = '\0';
}
/* revescape: escape sequences to real chars */
void revescape(char t[], char s[])
{
    int i, j;
    for(i=0, j=0; s[i]!='\0';i++)
    {
        switch(s[i])
        {
            case '\\':
                switch(s[i+1])
                {
                    case 'n':
                        t[j++] = '\n';
                        i++;
                        break;
                    case 't':
                        t[j++] = '\t';
                        i++;
                        break;
                    default:
                        t[j++] = '\\';
                        break;
                }
                break;
            default:
                t[j++] = s[i];
                break;
        }
    }
    t[j] = '\0';
}
/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;
    for (i=0; i<lim-1 && (c=getchar())!=EOF; ++i)
        s[i] = c;
    if (c != EOF)
        printf("Maximum character limit exceeded.\n");
    s[i] = '\0';
    printf("Length = %d\n", i);
    return i;
}
