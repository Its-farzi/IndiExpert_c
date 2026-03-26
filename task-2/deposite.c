#include<stdio.h>
int main()
{
    int balance=0,deposit_amount,available_balance;
    printf("Please Enter Amount to deposit ");
    scanf("%d",&deposit_amount);
    available_balance=(deposit_amount += balance);
    printf("Available Balance %d",available_balance);
    return 0;

}  