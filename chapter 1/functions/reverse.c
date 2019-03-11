#include <stdio.h>
#define MAXLINE 500

int getline(char[]);
void reverse(char[], int);

main()
{
    int len;
    char line[MAXLINE];
    while((len=getline(line)) > 0)
    {
        reverse(line, len);
        printf("Reverse of line: %s\n", line);
    }
}

int getline(char s[])
{
    int i = 0, lim = MAXLINE, c;
    printf("Input line: ");
    while(i<lim-1 && (c=getchar())!=EOF && c!='\n')
    {
        s[i] = c;
        ++i;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    else if (c!=EOF)
        printf("Max. char. limit exceeded!\n");
    s[i] = '\0';
    printf("Length = %d\n", i);
    return i;
}

/* reverse: reverses string */
void reverse(char s[], int len)
{
    int i, temp;
    len = len - 2;
    for(i=0; i<=len/2; ++i)
    {
        temp = s[i];
        s[i] = s[len-i];
        s[len-i] = temp;
    }
}
