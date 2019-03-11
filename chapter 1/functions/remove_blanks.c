#include <stdio.h>
#define MAXTOTAL 10000
#define MAXLINE  500

int getline(char[], int);
int store(char[], char[], int);

main()
{
    int len, pos = 0, i = 0;
    char total[MAXTOTAL], line[MAXLINE], c;

    while((len = getline(line, MAXLINE))>0)
    {
        pos = store(total, line, pos);
    }
    if (pos>0)
        while ((c=total[i])!='\0')
        {
            if (c=='\n')
                printf(".\n"); /* to check for trailing blanks */
            else
                printf("%c", c);
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

/* store: store characters and ignore blanks at start and end of lines */
int store(char to[], char from[], int pos)
{
    int i=0, flag = 0, fl = 0, temp;
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
            if(c==' ' || c=='\t')
            {
                if (fl==0)
                {
                    temp = pos;
                    fl = 1;
                }
            }
            else if(c=='\n')
            {
                if (fl==1)
                    pos = temp;
            }
            else
                fl = 0;
            to[pos] = c;
            ++pos;
            ++i;
            flag = 1;
        }
    }
    return pos;
}
