//3b.swaping of two numbers
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;   // store a in temp
    a = b;      // put b into a
    b = temp;   // put temp (old a) into b
    printf("After  swapping: a = %d, b = %d\n", a, b);
    return 0;
}

Output:
Enter two integers: 2 3 
Before swapping: a= 2,b= 3
After swapping: a= 3,b=2