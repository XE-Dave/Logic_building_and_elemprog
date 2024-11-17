#include <stdio.h>
int main()
{
    int p;
    float r;
    float t;
    float i;
    printf("please enter amount for p\n");
    scanf("%d", &p);
    printf("please enter amount for r\n");
    scanf("%f", &r);
    printf("please enter amount for t\n");
    scanf("%f", &t);
    i=p*r*t/100;
    printf("result of the simple interest is:%f",i);
    return 0;
}