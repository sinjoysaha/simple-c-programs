#include <stdio.h>

/* print Celsius-Fahrenheit table
    for fahr = -40,20, ... 300 */

main()
{
    /* declaration */
    float fahr, celsius;
    int lower, upper, step;

    /* assignment */
    lower = -40;    /* lower limit of temp table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    celsius = lower;

    printf("%s (%d to %d):\n", "Celsius-Fahrenheit Table", lower, upper);
    while(celsius <= upper)
    {
        fahr = (9*celsius / 5) + 32;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

}
