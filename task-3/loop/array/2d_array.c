#include <stdio.h>
int main()
{
    int number[3][3] = {{2, 5, 3}, {5, 6, 3}, {8, 9, 6}};

    for (int i = 0; i < 3; i++)
    {
        for (int y = 0; y < 3; y++)
        printf(" %d ", number[i][y]);
        printf("\n"); 
    }

    return 0;
}