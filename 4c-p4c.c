//4c. to find largest of three numbers
#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
    {
        printf("largest is %d",a);
    }
    else if (b>=a && b>=c)
    {
        printf("largest is %d",b);
    }
    else
    {
        printf("largest is %d",c);
    }
    return 0;
}

Output:
Enter three numbers :5 6 4
Largest is 6