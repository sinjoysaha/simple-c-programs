#include <stdio.h>

/* prints a histogram of lengths of words in its input */

main()
{
    int c, width, wl, i, j, flag;
    int nwords[10];
    wl = 0;
    for(i=0; i<10; ++i)
        nwords[i] = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            ++nwords[wl];
            wl = 0;
        }
        else
            ++wl;
    }

    /* 1st Version with horizontal orientation */
    for(i=1; i<10; ++i)
    {
        printf("%3d|", i);
        for(j=1; j<=nwords[i]; ++j)
            printf("=");
        printf("|\n");
    }

    /* 2nd Version with vertical orientation */
    flag = 1;
    for(i=1; i<10; ++i)
        printf("%2d", i);
    while(flag)
    {
        printf("\n");
        flag = 0;
        for(i=1; i<10; ++i)
        {
            if(nwords[i]>0)
            {
                printf(" =");
                --nwords[i];
                ++flag;
            }
            else
                printf("  ");
        }
    }
}
