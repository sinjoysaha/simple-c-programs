#include <stdio.h>

/* count characters in input 1st version */
main()
{
    long nc;
    double nc2;
    printf("%s\n","1st Version:");
    nc = 0;
    while(getchar()!=EOF)
        ++nc;
    printf("%ld\n",nc);

    printf("%s\n","2nd Version:");
    for(nc2=0; getchar()!=EOF; ++nc2);
    printf("%.0f\n", nc2);
}
