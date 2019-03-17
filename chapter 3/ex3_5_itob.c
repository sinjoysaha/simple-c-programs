#include <stdio.h>
#include <string.h>
#define MAXLINE 100
void itob(int, char[], int);
void reverse(char[]);
int main(void)
{
    char s[MAXLINE];
    int n, b;
    printf("Enter number: ");
    scanf("%d", &n);
    do
    {
        printf("Enter base more than 2: ");
        scanf("%d", &b);
    }while(b<2);
    itob(n,s,b);
    printf("%s\n", s);
    return 0;
}
/* itob: convert integer to string; version 2*/
void itob(int n, char s[], int b)
{
    int i, sign;
    sign = (n<0) ? -1:1;
    i = 0;
    do
    {
        int x = (n%b)*sign;
        s[i++] = x + ((x<10) ? '0' : 'A'-10);
        n/= b;
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
