//BASIC CALCULATOR(2 numbers)

#include <stdio.h>

int main(void) {
  int i;                   // All variables are declared
  int n;
  int a;
  int b;
while(1){
  printf(
    "1.Addition\n"
    "2.Subtraction\n"
    "3.Multiplication\n"     // Choice asked from user 
    "4.Division\n"
    "5.Exit\n"
    "Enter your choice: ");
  scanf("%d", &n);
  if(n==5){
    printf("Thank you\n");     //Choice defined for exiting the program 
    break;
  }
  printf("Enter a number ");
  scanf("%d",&a);
  printf("Enter a number ");                          //Numbers asked from user
  scanf("%d",&b);

  switch(n){
    case 1 : printf("Sum is : %d\n", a+b);
    break;                                         
    case 2: printf("Difference is : %d\n",a-b);       //Switch case for all the choices and operations perform
    break;
    case 3: printf("Product is : %d\n", a*b);
    break;
    case 4: printf("Quotient is : %d\n", a/b);
    break;
}
 
}
  return 0;
}
