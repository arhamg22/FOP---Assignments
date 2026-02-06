#include <stdio.h>
void main(){
    float basic_pay,hra,ta,gross_salary,profession_tax,net_salary;

    printf("basic pay:");
    scanf("%f",&basic_pay);

    hra = 0.10*basic_pay;
    ta = 0.05*basic_pay;
    gross_salary = basic_pay + hra + ta;
    profession_tax = 0.02 * gross_salary;
    net_salary = gross_salary - profession_tax;

    printf("Gross salary: %.2f \n",gross_salary);
    printf("Net salary: %.2f \n",net_salary);
    

}
