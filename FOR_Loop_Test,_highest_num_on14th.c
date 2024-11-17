#include <stdio.h>
void main ()
{
    int nums [10];
    int i;
    int high;
    int total;
    for(i=0; i<10; i++){
        printf("enter the %d number: ", i+1);
        scanf("%d", &nums[i]);
    }
    high=nums[0];
    for(i=1; i<10; i++){
        if (high<nums[i])
            high=nums[i];
    }
    printf("the highest number entered is %d\n", high);
    for(i=0, total=0; i<10; i++)
        total+=nums[i];
        printf("the total of the numbers entered is %d", total);
}