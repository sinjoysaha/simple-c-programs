#include <stdio.h>
#define MAXTOTAL 10000
#define MAXLINE  500

int getline(char[], int);
int store(char[], char[], int);

main()
{
    int len, pos = 0;
    char total[MAXTOTAL], line[MAXLINE];

    while((len = getline(line, MAXLINE))>0)
    {
        pos = store(total, line, pos);
    }
    if (pos>0)
        printf("%s\n", total);
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

int store(char to[], char from[], int pos)
{
    int i=0, flag = 0;
    char c;
    while((c=from[i])!='\0')
    {
        if(flag == 0 && (c==' ' || c=='\t' || c=='\n'))
        {
            ++i;
            continue;
        }
        else
        {
            to[pos] = c;
            ++pos;
            ++i;
            flag = 1;
        }
    }
    return pos;
}
