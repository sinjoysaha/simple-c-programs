#include <stdio.h>

/* prints a histogram of lengths of words in its input */

main()
{
    int c, width, wl, i, j, flag, max;
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
    max = 0;
    for(i=1; i<10; ++i)
    {
        printf("%3d|", i);
        for(j=1; j<=nwords[i]; ++j)
            printf("=");
        printf("|\n");
        if(nwords[i]>max)
            max = nwords[i];
    }

    /* 2nd Version with vertical orientation */
    for(j=max+1; j>=1; --j)
    {
        printf("\n");
        for(i=1; i<10; ++i)
        {
            if(nwords[i]>=j)
            {
                printf("| |\t");
                --nwords[i];
            }
            else if(j==(nwords[i]+1))
                printf("___\t");
            else
                printf("\t");
        }
    }
    printf("\n");
    /*for(i=1; i<10; ++i)
        printf("---\t");*/
    printf("\n");
    for(i=1; i<10; ++i)
        printf(" %d\t", i);
}
