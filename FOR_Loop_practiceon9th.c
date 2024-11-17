#include <stdio.h>
int main() {
    int num1, num2, sum = 0;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++){
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("Sum of odd numbers: %d\n", sum);
    return 0;
}