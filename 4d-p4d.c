//4d. nested if positivity of two numbers
 #include <stdio.h>

 int main() {
 int a,b;
 printf("enter two numbers:");
 scanf("%d %d",&a,&b);
 if (a>0)
 { if(b>0)
 {printf("both numbers are positive");}}
 else if(a>0)
 { printf("a is positive not b");}
 else if(b>0)
 {printf("b is positive but not a");}
 else
 { printf("a and b are not positive");}
 return 0;
 }

Output:
Enter two numbers:
5 6
Both numbers are positive