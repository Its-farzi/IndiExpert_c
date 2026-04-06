#include<stdio.h>
int main()
{
    int balance=0,withdrawl_amount,available_balance=0;
    printf("Please Enter Amount to withdrawl ");
    scanf("%d",&withdrawl_amount);
    available_balance=(balance -= withdrawl_amount);
    printf("Available Balance %d",available_balance);
    return 0;

}