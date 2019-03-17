#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAXLINE 100
void itoa(int, char[]);
void reverse(char[]);
int main(void)
{
    char s[MAXLINE];
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    itoa(n,s);
    printf("%s\n", s);
    return 0;
}
/* itoa: convert integer to string; version 2*/
void itoa(int n, char s[])
{
    int i, sign;
    sign = (n<0) ? -1:1;
    i = 0;
    do
    {
        s[i++] = (n%10)*sign + '0';
        n/= 10;
    }while((n*sign)>0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}
/* reverse: reverse string s in place */
void reverse(char s[])
{
    int c, i, j;
    for (i=0, j=strlen(s)-1; i<j;i++, j--)
        c = s[i], s[i] = s[j], s[j] = c;
}
