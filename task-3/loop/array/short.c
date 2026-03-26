#include <stdio.h>
int main()
{
char name[20];
for (int i = 1; i < 11; i++)
{
    if (i<=10)
    {
        
        printf("PLease enter %d Student Name : \n",i);
        scanf("%s",name);
    }
    else
    {
        printf("Invlaide Input");
    }

  
}





    return 0;
}