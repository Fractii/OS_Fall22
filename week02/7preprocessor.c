/************************
 * Include directive
 * *********************/
#include <stdio.h>

#define DEBUG 1

int div (int a, int b){

#if DEBUG
    printf("\n value of a is %d\n", a);
    printf("\n value of b is %d\n", b);
#endif

    return a/b;
}

int main (){

    int x, y;
    printf("Enter the dividend and the divisor: ");
    scanf("%d %d", &x, &y);

    int quotient = div(x,y);
    printf("\nThe result is %d\n", quotient);


    return 0;
}
