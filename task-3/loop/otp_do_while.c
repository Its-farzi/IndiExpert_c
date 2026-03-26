#include <stdio.h>

int main()
{
int otp = 150508;
int input;
int count=0;
int attemt=3;


do
{
printf("Enter your OTP\n");
scanf("%d",&input);

if (otp == input)
{
printf("\nOTP verified successfully");
break;
}
else
{
count++;
printf("\nPlease Enter Correct OTP, You have tried %d times and remaining %d\n",count,attemt-count);
}
if(count==3)
printf("\nYou exced you input limit for today, please try after 24hr.\n");
}
while (count<attemt);

return 0;

}