#include <stdio.h>
#include <string.h>
#define MAXLINE 1000

int mygetline(char line[], int max);
int strrindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main()
{
    char line[MAXLINE];
    int found = 0;
    while (mygetline(line, MAXLINE)>0)
    {
        printf("%d\n",strrindex(line, pattern));
        found++;
    }
    return found;
}
int mygetline(char s[], int lim)
{
    int c, i = 0;
    while( --lim>0 && (c=getchar())!=EOF && c!='\n')
        s[i++] = c;
    if (c=='\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}
int strrindex(char s[], char t[])
{
    int i, j, k, l=strlen(t);
    for(i=strlen(s)-1; i>0; i--)
    {
        for (j=i,k=l-1;k>=0 && s[j]==t[k];j--,k--)
            ;
        if (k<0)
            return j+1;
    }
    return -1;
}
