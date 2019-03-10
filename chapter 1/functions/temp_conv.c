#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = -40,20, ... 300 */
float fahr_cels(float);

float fahr_cels(float f)
{
    return (5 * (f-32) / 9);
}

main()
{
    /* declaration */
    float fahr;
    int lower, upper, step;

    /* assignment */
    lower = -40;    /* lower limit of temp table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;

    printf("%s (%d to %d):\n", "Fahrenheit-Celsius Table", lower, upper);
    while(fahr <= upper)
    {
        printf("%3.0f\t%6.1f\n", fahr, fahr_cels(fahr));
        fahr = fahr + step;
    }

}
