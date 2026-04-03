#include <stdio.h>
int main (){
    int a,b;
    int temp;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    
 printf("Enter the second number:\n");
    scanf("%d",&b);
    
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d",a,b);
    return 0;
}