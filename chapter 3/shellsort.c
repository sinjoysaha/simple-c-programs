#include <stdio.h>
#define SIZE 10
void shellsort(int[],int);
int main()
{
    int v[SIZE], i;
    for (i=0; i<SIZE; i++)
        scanf("%d", &v[i]);
    shellsort(v, SIZE);
    for (i=0; i<SIZE; i++)
        printf("%d ", v[i]);
    return 0;
}
/* shellsort: sort v[] in increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for(gap=n/2;gap>0; gap/=2)
        for (i=gap;i<n;i++)
            for(j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap)
            {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
}
