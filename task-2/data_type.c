#include <stdio.h>
int main()
{
    char grade;
    int age;
    float coordinate;
    printf("Please Enter Your Grade : ");
    scanf("%c", &grade);

    printf("Please Enter Your Age : ");
    scanf("%d", &age);

    printf("Please Enter Your coordinate : ");
    scanf("%f", &coordinate);
    printf("------------------User Result----------------");
    printf("\nName: %c", grade);
    printf("\nAge: %d", age);
    printf("\ncoordinate: %f", coordinate);
    return 0;
}