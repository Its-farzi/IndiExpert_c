#include<stdio.h>
int main()
{
int father_income[4]={1000,2000,3000,7000};
int mother_income[3]={10000,900,1000};
int my_income[7];
for (int i=0;i<4;i++)
{
my_income[i]=father_income[i];

}
for (int i=0;i<3;i++)
{
    my_income[i+4]=mother_income[i];
}
for (int i = 0; i < 7; i++)
{
    
   printf("My income on day %d : %d\n",i+1,my_income[i]);
}



    return 0;
}