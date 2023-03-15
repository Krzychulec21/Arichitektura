#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("stack.c\n\n");
    
    int *x = malloc(sizeof(int));
    int *y = malloc(sizeof(int));
    
    printf("x = %p\n",x);
    printf("y = %p\n\n",y);
    
    *x = 1;
    *y = 2; 
    
    printf("*x = %d\n",*x);
    printf("*y = %d\n\n",*y);
       
    /*
                [ ][ ][ ][ ]
                [ ][ ][ ][ ]
                [ ][ ][ ][ ]
    00E51650    [2][0][0][0]   *y
    
                [ ][ ][ ][ ]
                [ ][ ][ ][ ]
                [ ][ ][ ][ ]
    00E51640    [1][0][0][0]   *x

    */
    
    
    
    return 0;
}
