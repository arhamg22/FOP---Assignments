#include <stdio.h>
void maIn(){
    int choice;
    float num1,num2,reult;
    
    printf("Select an peration to perform:\n");
    printf("1.Additon \n");
    printf("2.Subtraction \n");
    printf("3.Multiplication \n");
    printf("4.Division \n");
    scanf("%d",&choice);
    
    printf("Enter two numbers:");
    scanf("%f %f",& num1 & num2);
    
    switch (chhoice){
        case 1: printf("Result: %2f \n",num1+num2);
        break;
        case 2: printf("Result: %2f \n",num1-num2");
        break;
        case 3: printf("Result: %2f \n",num1*num2);
        break;
        case 4:
        if(num2! = 0){
         printf(""Result: %2f \n",num/num2);
        }else {
               printf("Error:Division by zero is not allowed \n");
               break;
               default: printf("Invalid choice.Please select a valid operaton \n");
        
        }
    }
}