/ 2a. to display different data types
#include <stdio.h>

int main() {
    int a = 5;
    float b = 5.5;
    char c = 'A';

    printf("integer=%d\n float=%.1f\n character=%c\n", a, b, c);

    return 0;
}

Output:
Integer=5
Float=5.5
Character=A