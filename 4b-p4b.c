//4b. to check voting eligibility
 #include <stdio.h>

 int main() {
   int age;
   printf("enter age");
   scanf("%d",&age);
   if(age>=18)
   {
    printf("eligible to vote");
  }
  else
  { printf("not eligible to vote");}

  return 0;
 }

Output:
Enter age 19
Eligible to vote