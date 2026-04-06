#include <stdio.h>

int main()
{
    int i;
    char subject[20];  
    int marks[5];
    int total = 0;        

    for (i = 0; i < 5; i++)
    {
        printf("\nPlease enter subject: ");
        scanf("%s", subject[i]);          

        printf("\nPlease enter your marks: ");
        scanf("%d", &marks[i]);

        total += marks[i];               
    }

    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", (float)total / 5);

    return 0;
}