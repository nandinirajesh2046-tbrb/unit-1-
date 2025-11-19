// 2c. print sizeof each data type
#include <stdio.h>

int main() {
    printf("sizeof int: %d bytes\n", sizeof(int));
    printf("sizeof float: %d bytes\n", sizeof(float));
    printf("sizeof char: %d bytes\n", sizeof(char));
    printf("sizeof double: %d bytes\n", sizeof(double));

    return 0;
}

Output:
Sizeof  int: 4
Sizeof float: 4
Sizeof char: 1
Sizeof double: 8