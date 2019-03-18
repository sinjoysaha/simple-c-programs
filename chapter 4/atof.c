#include <ctype.h>
#include <stdio.h>
double atof(char[]);
main(void)
{
    char s[1000];
    double val;
    printf("Enter a string: ");
    scanf("%s", &s);
    val = atof(s);
    printf("Number is %f\n", val);
}
double atof(char s[])
{
    double val, power;
    int i, sign;
    for (i=0; isspace(s[i]);i++);

    sign = (s[i] == '-')?-1:1;
    if(s[i] == '+' || s[i]=='-')
        i++;
    for (val = 0.0; isdigit(s[i]);i++)
        val = 10.0*val+(s[i]-'0');
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++)
    {
        val = 10.0*val + (s[i]-'0');
        power *= 10.0;
    }
    return sign*val/power;
}
