#include <stdio.h>

main()
{
    int c;
    printf("Read char. & Copy to screen:\n");
    while((c = getchar())!=EOF)
        putchar(c);

    printf("Verify getchar()!=EOF is 0 or 1:\n");
    printf("%d\n",getchar()!=EOF);

    printf("Value of EOF: ");
    printf("%d",EOF);
}
