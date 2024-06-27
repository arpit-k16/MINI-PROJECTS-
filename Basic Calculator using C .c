//BASIC CALCULATOR(2 numbers)

#include <stdio.h>
int main(void) {  
  int yn;
  int nchoice;
  int number1;              // All variables are declared
  int number2;
  while(1){
        printf("Do you want to continue(1/0)?\n");   //Asking user to continue using the calculator or not
        scanf("%d",&yn);
        if(yn==0){
          printf("Thank you\n");
          break;
        }
        else if(yn==1){
          printf("Enter a number ");
          scanf("%d",&number1);
          printf("Enter a number ");                          //Numbers asked from user
          scanf("%d",&number2);

          printf(
          "1.Addition\n"
          "2.Subtraction\n"
          "3.Multiplication\n"     // Choice asked from user 
          "4.Division\n"
          "5.Exit\n"
          "Enter your choice: ");
           scanf("%d", &nchoice);

           if (nchoice==1){
             printf("Sum is %d\n",number1+number2);
           }
           else if(nchoice==2){
             printf("Difference is %d\n",number1-number2);                      
           }                                                             //Performing operation
           else if(nchoice==3){
             printf("Product is %d\n",number1*number2);
           }
           else if(nchoice==4){
             if (number2==0){
               printf("Warning : Division by Zero not possible\n");      //Warning message if user enter  0 in denominator
               continue;                                              
             }
             printf("Quotient is %d\n",number1/number2);
             printf("Remainder is %d\n",number1%number2);
           }
           else if(nchoice==5){
             printf("Thank you\n");      //Exiting the program
             break; 
                   }
           else{
            printf("Invalid Input\n");   //If user enters invalid choice
             

           }
          
        }
        else{
          printf("Invalid option !!! Try Again \n");     // Invalid option message
        } 
        
}
  return 0;
}


