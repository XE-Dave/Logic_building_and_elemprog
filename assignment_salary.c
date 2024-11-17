#include <stdio.h>
#include <math.h>
int main ()
{
    char name;
    int basic;
    float daper;
    float bonper;
    float loadnet;
    float salary;
    printf("please enter a value for name\n");
    scanf("%s", &name);
    printf("please enter a value for basic\n");
    scanf("%d", &basic);
    printf("please enter a value for daper\n");
    scanf("%f", &daper);
    printf("please enter a value for bonper\n");
    scanf("%f", &bonper);
    printf("please enter a value for loadnet\n");
    scanf("%f", &loadnet);
    salary=basic+basic*daper/100+bonper*basic/100-loadnet;
    printf("the result of the salary is:$%.0f", round(salary));
    return 0;
}