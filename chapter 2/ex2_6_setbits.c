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

unsigned setbits(unsigned, int, int, unsigned);

main()
{
    unsigned x, y;
    int p, n;
    printf("Enter x, p, n, y:\n");
    scanf("%u %d %d %u", &x ,&p, &n, &y);
    printf("x: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
  BYTE_TO_BINARY(x>>8), BYTE_TO_BINARY(x));
    printf("y: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
  BYTE_TO_BINARY(y>>8), BYTE_TO_BINARY(y));

    x = setbits(x,p,n,y);
    printf("\nx: %u", x);
    printf("\n =>"BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
  BYTE_TO_BINARY(x>>8), BYTE_TO_BINARY(x));
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return (x | (y & ~(~0<<n))<<(p+1-n));
}
