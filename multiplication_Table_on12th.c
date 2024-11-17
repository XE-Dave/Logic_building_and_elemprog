#include <stdio.h>
int main ()
{
    int num, product;
    printf("enter a value: ");
    scanf("%d", &num);
    printf("multiplication Table for %d:\n", num);
    for (product=1; product<=10; product++){
        printf("%dx%d=%d\n", num, product, num*product);
    }
    return 0;
}
