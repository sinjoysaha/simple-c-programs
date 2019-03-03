#include <stdio.h>

/* symbolic constants */
#define LOWER   -40 /* lower limit */
#define UPPER   300 /* upper limit */
#define STEP    20  /* step size */

/* print Fahrenheit-Celsius Table usinf for loop */

main()
{
    int fahr;
    printf("%s (%d to %d):\n", "Fahrenheit-Celsius Table", LOWER, UPPER);
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + 20)
        printf("%6d\t%8.1f\n", fahr,(5.0/9.0)*(fahr-32));

    printf("\n%s (%d to %d):\n", "Fahrenheit-Celsius In Reverse", UPPER, LOWER);
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - 20)
        printf("%6d\t%8.1f\n", fahr,(5.0/9.0)*(fahr-32));
}
