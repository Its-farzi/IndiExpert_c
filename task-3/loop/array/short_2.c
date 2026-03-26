#include <stdio.h>
#include <string.h>

int main()
{
    char name[10][20]; // 2D array to store 10 names
    char temp[20];     // temporary variable for swapping

    // Input
    for (int i = 0; i < 10; i++)
    {
        printf("Please enter %d Student Name: ", i + 1);
        scanf("%s", name[i]);
    }

    // Bubble Sort (Alphabetical Order)
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (strcmp(name[i], name[j]) > 0) // compare two names
            {
                strcpy(temp, name[i]); // swap
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    // Output
    printf("\n--- Students in Alphabetical Order ---\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. %s\n", i + 1, name[i]);
    }

    return 0;
}