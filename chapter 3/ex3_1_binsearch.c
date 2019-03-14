#include <stdio.h>
#include <time.h>
#define SIZE 10000
int binsearch(int, int[], int);
int main(void)
{
    int v[SIZE], i, x, p;
    clock_t t;
    /*printf("Enter sorted array:\n");*/
    for (i=0; i<SIZE;i++)
    {/*
        printf("\nValue %d: ", i);
        scanf("%d", &v[i]);*/
        v[i] = i+1*2;
    }
    printf("\nEnter value to search: ");
    scanf("%d", &x);
    t = clock();
    p = binsearch(x, v, SIZE);
    t = clock() - t;
    printf("Clocks: %ld\n", t);
    printf("Location of %d: %d\n", x, p);
    return 0;
}
/* binsearch: find x in v[0]<=v[1]<=...v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n-1;
    while (low <= high && x!=v[mid=(low+high)/2])
    {
        printf("%d %d %d \n",x, mid, v[mid]);
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (x==v[mid])
        return mid;
    else
        return -1; /* not found */
}
