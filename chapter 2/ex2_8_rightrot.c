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

unsigned rightrot(unsigned, int);

main()
{
    unsigned x;
    int n;
    printf("Enter x, n:\n");
    scanf("%u %d", &x, &n);
    printf("x: "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
    BYTE_TO_BINARY(x>>24),BYTE_TO_BINARY(x>>16),BYTE_TO_BINARY(x>>8), BYTE_TO_BINARY(x));

    x = rightrot(x, n);
    printf("\nx: %u", x);
    printf("\n =>"BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN" "BYTE_TO_BINARY_PATTERN"\n",
    BYTE_TO_BINARY(x>>24),BYTE_TO_BINARY(x>>16),BYTE_TO_BINARY(x>>8), BYTE_TO_BINARY(x));
}

unsigned rightrot(unsigned x, int n)
{
    return ((x>>n) | (x << (32-n))) ;
}
