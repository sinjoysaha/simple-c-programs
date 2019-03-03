#include <stdio.h>

/* print Fahrenheit-Celsius table
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

    fahr = lower;

    printf("%s (%d to %d):\n", "Fahrenheit-Celsius Table", lower, upper);
    while(fahr <= upper)
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}
