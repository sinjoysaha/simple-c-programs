#include <stdio.h>
#include <time.h>
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')
int bitcount(unsigned);
main()
{
    unsigned x;
    int n;
    printf("Enter x: ");
    scanf("%u", &x);
    printf("x: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
    BYTE_TO_BINARY(x>>24),BYTE_TO_BINARY(x>>16),BYTE_TO_BINARY(x>>8), BYTE_TO_BINARY(x));
    n = bitcount(x);
    printf("\nNo. of 1 bits: %d\n", n);
}

/* bitcount: count 1 bits in x */
int bitcount(unsigned x)
{
    int b;
    clock_t t;
    t = clock();
    for (b=0; x!=0 ; x&=(x-1))
        b++;
    t = clock() - t;
    printf("Clocks taken: %ld\n", t);
    return b;
}
