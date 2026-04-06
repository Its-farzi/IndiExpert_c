#include <stdio.h>

int main()
{
    // taking variable
    int number[6]= {0, 1, 2, -3, -5, 22};
    int positive_number[6];
    int negative_number[6];
    int positive_count = 0;
    int negative_count = 0;

    //using for loop for checking index value 
    for (int i = 0; i < 6; i++)
    {
        if (number[i] >= 0)
        {
            positive_number[positive_count] = number[i];
            positive_count++;       
        }
        else
        {
            negative_number[negative_count] = number[i];
            negative_count++;
        }
    }
    // print total positive and negative number
    // using for loop for multiple output
    printf("\npositive number : ");
    for (int i = 0; i < positive_count; i++)
    {
        printf("%d ", positive_number[i]);
    }

    printf("\nnegative number : ");
    for (int i = 0; i < negative_count; i++)
    {
        printf("%d ", negative_number[i]);
    }
    return 0;
}