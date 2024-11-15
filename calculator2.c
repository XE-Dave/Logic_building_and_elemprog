#include <stdio.h>
#include <math.h>

int addnums(int x) {
    int sum = 0, num;
    printf("Enter %d numbers:\n", x);
    for (int i = 0; i < x; ++i) {
        scanf("%d", &num);
        sum += num;
    }
    return sum;
}

int subnums(int x) {
    int difference, num;
    printf("Enter %d numbers:\n", x);
    scanf("%d", &difference);
    for (int i = 1; i < x; ++i) {
        scanf("%d", &num);
        difference -= num;
    }
    return difference;
}

int multinums(int x) {
    int product = 1, num;
    printf("Enter %d numbers:\n", x);
    for (int i = 0; i < x; ++i) {
        scanf("%d", &num);
        product *= num;
    }
    return product;
}

int divnums(int x) {
    int quotient, num;
    printf("Enter %d numbers:\n", x);
    scanf("%d", &quotient);
    for (int i = 1; i < x; ++i) {
        scanf("%d", &num);
        if (num != 0) {
            quotient /= num;
        } else {
            printf("Error: Division by zero.\n");
            return 0;
        }
    }
    return quotient;
}

int exponentnums(int x, int y) {
    return (int)pow(x, y);
}

int main() {
    int n;
    char k;
    printf("Enter the amount of numbers you want to use\n");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("You need to enter at least one number.\n");
        return 1;
    }

    printf("Pick a numeric sign + - * / ^\n");
    scanf(" %c", &k);

    if (k == '+') {
        printf("Sum of numbers is %d\n", addnums(n));
    } else if (k == '-') {
        printf("Difference of numbers is %d\n", subnums(n));
    } else if (k == '*') {
        printf("Product of numbers is %d\n", multinums(n));
    } else if (k == '/') {
        printf("Division of numbers is %d\n", divnums(n));
    } else if (k == '^') {
        int base, exp;
        printf("Enter the base and exponent:\n");
        scanf("%d %d", &base, &exp);
        printf("Result of exponentiation is %d\n", exponentnums(base, exp));
    } else {
        printf("Invalid numeric sign.\n");
    }

    return 0;
}