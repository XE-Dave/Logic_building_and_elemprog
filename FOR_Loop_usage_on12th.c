#include <stdio.h>
int main ()
{
    int age;
    char name[40];
    printf("enter an age: ");
    scanf("%d", &age);
    printf("please enter name: ");
    scanf("%s", &name);
    int a;
    for (a=0; a<age; a++){
        printf("%s\n", name);
    }
    return 0;
}
