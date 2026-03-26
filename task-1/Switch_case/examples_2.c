#include <stdio.h>
int main()
{
    char fruit_name;
    printf("________________________________________");
    printf("\nPlease Enter First Letter of your Fruit :");
    scanf("%C", &fruit_name);

    switch (fruit_name)
    {
    case 'a':
    case 'A':
    case 'Apple':
        printf("Your Fruit Name is Apple");
        break;
    case 'b':
        printf("Banana");
        break;
    case 'c':
        printf("Cheery");
        break;
    case 'd':
        printf("Dragon Fruit");
    default:
        printf("Invalide Input");
    }

    return 0;
}