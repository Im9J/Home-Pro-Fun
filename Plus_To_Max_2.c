#include <stdio.h>

int main () {
    int a, b, c, min;
    printf("Input number : ");
    scanf("%d",&a);
    min = a;

    printf("Input number : ");
    scanf("%d",&b);
    if(b<min) min = b;

    printf("Input number : ");
    scanf("%d",&c);
    if (c<min) min = c;

    printf("%d",a+b+c-min);
    return 0;
}
