#include <stdio.h>
#include <string.h>
#define MAXLINE 100
void itoa(int, char[], int);
void reverse(char[]);
int main(void)
{
    char s[MAXLINE];
    int n, w;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Enter min field width: ");
    scanf("%d", &w);
    itoa(n,s,w);
    printf("%s\n", s);
    return 0;
}
/* itoa: convert integer to string; version 3; with padding */
void itoa(int n, char s[], int w)
{
    int i, sign;
    sign = (n<0) ? -1:1;
    i = 0;
    do
    {
        s[i++] = (n%10)*sign + '0';
        n/= 10;
        w--;
    }while((n*sign)>0);
    if (sign < 0)
    {
        s[i++] = '-';
        w--;
    }
    while(w-->0)
        s[i++] = ' ';
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
