//3a.arithmetic operation
#include <stdio.h>
int main() {
    int num1, num2;
    int sum, diff, mul, div;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    sum  = num1 + num2;          // addition
    diff = num1 - num2;          // subtraction
    mul = num1 * num2;          // multiplication
    div = num1/num2          // division 
    printf("Sum        = %d\n",   sum);
    printf("Difference = %d\n",   diff);
    printf("mul    = %d\n",   mul);
    printf("div   = %d\n", div);
    return 0;
}

Output:
Enter two integers: 4 1
Sum   =5
Difference= 3
Mul = 4
Div=4