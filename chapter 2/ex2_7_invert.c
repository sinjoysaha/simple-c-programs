#include <stdio.h>
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

unsigned invert(unsigned, int, int);

main()
{
    unsigned x;
    int p, n;
    printf("Enter x, p, n:\n");
    scanf("%u %d %d", &x ,&p, &n);
    printf("x: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
    BYTE_TO_BINARY(x>>24),BYTE_TO_BINARY(x>>16),BYTE_TO_BINARY(x>>8), BYTE_TO_BINARY(x));

    x = invert(x,p,n);
    printf("\nx: %u", x);
    printf("\n =>"BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
    BYTE_TO_BINARY(x>>24),BYTE_TO_BINARY(x>>16),BYTE_TO_BINARY(x>>8), BYTE_TO_BINARY(x));
}

unsigned invert(unsigned x, int p, int n)
{
    return (x ^ ~(~0<<n)<<(p+1-n));
}
