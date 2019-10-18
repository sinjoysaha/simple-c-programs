/*Simple and efficient c program to find gcd of 2 given numbers
Example:
input :
300 20

output:
Gcd of 300 and 20 is 20
*/


#include <stdio.h>

int gcd(int,int);
int main()
{
    int a,b;
    printf("Enter 2 numbers \n");
    scanf("%d %d",&a,&b);
    printf("Gcd of %d and %d is %d",a,b,gcd(a,b));
    return 0;
}


int gcd(int a,int b)
{
    if (b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}