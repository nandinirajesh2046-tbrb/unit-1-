//8. factorial of number
#include <stdio.h>
int main() {

    int n, fact=1,i;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {fact=fact*i;}
    printf("factorial of %d is %d\n",n,fact);

    return 0;

}
Enter n: 
6
Factorial of 6 is 720s