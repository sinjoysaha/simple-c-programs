#include <stdio.h>
#define MAXLINE 1000
void expand(char[], char[]);
int valid(char, char, char);
int main(void)
{
    char s1[MAXLINE], s2[MAXLINE];
    printf("Enter string to be expanded: ");
    scanf("%s", &s1);
    expand(s1, s2);
    printf("Expanded:\n%s\n", s2);
}

/* expand: a-z -> abc...xyz */
void expand(char s1[], char s2[])
{
    int i, j, flag = 0;
    for(i=0, j=0; s1[i]!='\0'; i++)
    {
        char start = s1[i], mid = s1[i+1], end = s1[i+2];
        if (valid(start, mid, end))
        {
            char k;
            for (k=start; k<=end; k++)
                s2[j++] = k;
            i+=2;
        }
        else
        {
            s2[j++] = s1[i];
        }
    }
    s2[j] = '\0';
}

int valid(char start, char mid, char end)
{
    if (mid=='-' && end>start)
    {
        if ((start>='a' && start<='z') && end<='z')
            return 1;
        else if ((start>='A' && start<='Z') && end<='Z')
            return 1;
        else if ((start>='0' && start<='9') && end<='9')
            return 1;
    }
    else
        return 0;
}
