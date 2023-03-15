#include <stdio.h>

int main() {
    printf("data.c\n\n");

    int a = 1;
    int b = 2;
    int c;
    int d;
    int e = 3;
    int f;
    int g;
    int h = 4;

    printf("&a: %p, a: %d\n", &a,a);
    printf("&b: %p, b: %d\n", &b,b);
    printf("&c: %p, c: %d\n", &c,c);
    printf("&d: %p, d: %d\n", &d,d);
    printf("&e: %p, e: %d\n", &e,e);
    printf("&f: %p, f: %d\n", &f,f);
    printf("&g: %p, g: %d\n", &g,g);
    printf("&h: %p, h: %d\n", &h,h);
    /*

        0x16f0f7648 [1][0][0][0]   a
        0x16f0f7644 [2][0][0][0]   b
        0x16f0f7640 [ ][ ][ ][ ]   c
        0x16f0f763c [ ][ ][ ][ ]   d
        0x16f0f7638 [3][0][0][0]   e
        0x16f0f7634 [ ][ ][ ][ ]   f
        0x16f0f7630 [ ][ ][ ][ ]   g
        0x16f0f762c [4][0][0][0]   h

     */

    return 0;
}