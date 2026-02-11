#include <stdio.h>
int main(){
    int num,a,b,num1;
    int i=0;
    printf("enter the number:");
    scanf("%d",&num);
    a = num;
    while(num !=0){
        num1 = num / 10;
        b = num % 10;
        num1 = (num * num * num) + (b * b * b);

    }
    if (num1 == num) {
        printf("the number is amstrong");
    }
    else{
        printf("the number is not amstrong");
    }
}
