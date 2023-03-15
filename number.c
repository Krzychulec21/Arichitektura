#include <stdio.h>

int polinomial(unsigned char *p, int n) {
    int result = 0;
    for (int i = n - 1; i >= 0; i--) {
        result = result * 256 + *(p + i);
    }
    return result;
}

int horner(unsigned char *p, int n) {
    int result = *(p + n - 1);
    for (int i = n - 2; i >= 0; i--) {
        result = result * 256 + *(p + i);
    }
    return result;
}

int main() {
    unsigned char number1[] = {0x12};  // jednobajtowa reprezentacja liczby 18
    unsigned char number2[] = {0x12, 0x34};  // dwubajtowa reprezentacja liczby 4660
    unsigned char number3[] = {0x12, 0x34, 0x56, 0x78};  // czterobajtowa reprezentacja liczby 305419896
    printf("polinomial:\n");
    printf("number1 = %d\n", polinomial(number1, 1));
    printf("number2 = %d\n", polinomial(number2, 2));
    printf("number3 = %d\n\n", polinomial(number3, 4));

    printf("horner:\n");
    printf("number1 = %d\n", horner(number1, 1));
    printf("number2 = %d\n", horner(number2, 2));
    printf("number3 = %d\n", horner(number3, 4));

    return 0;
}
