/* Ex. 2-1 */
#include <stdio.h>
#include <limits.h>

main()
{
    char c=0, cmax=-1, cmin=-1;
    short s=0, smax=-1, smin=-1;
    int i=0, imax=-1, imin=-1;
    long l=0, lmax=-1, lmin=-1;
    printf("Using direct computation:\n");
    while (1)
    {
        if (c==cmax || c==cmin)
            break;
        if (c > cmax)
            cmax = c;
        else if (c < cmin)
            cmin = c;
        ++c;
    }
    printf("signed char range: %d to %d\n", cmin, cmax);
    printf("unsigned char range: %d to %d\n\n", 0, (cmax*2)+1);

    while (1)
    {
        if (s==smax || s==smin)
            break;
        if (s > smax)
            smax = s;
        else if (s < smin)
            smin = s;
        ++s;
    }
    printf("signed short range: %d to %d\n", smin, smax);
    printf("unsigned short range: %d to %d\n\n", 0, (smax*2)+1);
    while (1)
    {
        if (i==imax || i==imin)
            break;
        if (i > imax)
            imax = i;
        else if (i < imin)
            imin = i;
        ++i;
    }
    printf("signed int range: %d to %d\n", imin, imax);
    printf("unsigned int range: %d to %lu\n\n", 0, (imax*2)+1);
    while (1)
    {
        if (l==lmax || l==lmin)
            break;
        if (l > lmax)
            lmax = l;
        else if (l < lmin)
            lmin = l;
        ++l;
    }
    printf("signed long range: %li to %li\n", lmin, lmax);
    printf("unsigned long range: %d to %lu\n", 0, (lmax*2)+1);


    printf("\nUsing standard headers:\n");
    printf("CHAR_MIN CHAR_MAX: %d to %d\n\n", CHAR_MIN, CHAR_MAX);
    printf("signed char range: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("unsigned char range: %d to %d\n\n", 0, UCHAR_MAX);

    printf("signed short range: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned short range: %d to %d\n\n", 0, USHRT_MAX);

    printf("signed int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("unsigned int range: %d to %lu\n\n", 0, UINT_MAX);

    printf("signed long range: %li to %li\n", LONG_MIN, LONG_MAX);
    printf("unsigned long range: %d to %lu\n", 0, ULONG_MAX);
}
