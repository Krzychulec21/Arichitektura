#include <stdio.h>

/*
- jak� maksymaln� liczb� binarn� mo�na zapisa� przy pomocy typu int?

    UINT MAX = 4294967295
    UBIN_MAX = 1111111111
    
    Odp: odpowiedz napisac w domu*
    INT_MIN = -2147483648
    INT_MAX = 2147483647
    
- jaka jest warto�� dziesi�tna maksymalnej liczby binarnej, jak� mo�na zapisa� przy pomocy typu int?
               9876543210
    UBIN_MAX = 1111111111 = 2^10 - 1 = 1023 
*/

/*
11(10) = 1011(2) = 1*10^0 + 1*10^1 + 0*10^2 + 1*10^3 
11/2 = 5   r0 = 1
5/2 = 2    r1 = 1
2/2 = 1    r2 = 0
1/2 = 0    r2 = 1
*/

int dec2bin(int x) {
    int suma = 0;
    int pow = 1;

    while (x > 0) {
        suma = suma + x % 2 * pow;

        x = x / 2;

        pow = pow * 10;
    }

    return suma;
}

int bin2dec(int x) {
    int suma = 0;
    int pow = 1;

    while (x > 0) {
        suma = suma + x % 10 * pow;

        x = x / 10;

        pow = pow * 2;
    }

    return suma;
}

void dec2byte(unsigned int x) {
    unsigned char bytes[4];
    bytes[0] = x & 0xFF;
    bytes[1] = (x >> 8) & 0xFF;
    bytes[2] = (x >> 16) & 0xFF;
    bytes[3] = (x >> 24) & 0xFF;
    printf("[%03d][%03d][%03d][%03d]\n", bytes[0], bytes[1], bytes[2], bytes[3]);
}

int main() {
    printf("konwersje.c\n\n");

    //dec2bin(1023) = 1111111111
    int dec1 = 1023; //dec1 = 0..1023
    int bin1 = 1011; //bin1 = 11


    printf("dec2bin(%d) = %d\n", dec1, dec2bin(dec1));
    printf("bin2dec(%d) = %d\n", bin1, bin2dec(bin1));
    dec2byte(1023);

    //int dec2bin(int x);
    //int bin2dec(int x); // *
    //void dec2byte(unsigned int x); // reprezentacja little-endian *




    return 0;
}
