#include <stdio.h>
int main()
{
    int mobile = 830616;
    int input;
    int count=0;
    
    do
    {
        printf("Please Enter Mobile No. : ");
            scanf("%d", &input);
        if (input == mobile)
        {
            printf("\nMobile Number Successfully Verified\n");
            break;
        }
        else
        {
            printf("\nPlease Enter a Valide Mobile Number : \n");
            count++;
        }

    } while (count < 3);

    return 0;
}
