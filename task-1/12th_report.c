#include <stdio.h>

int main()
{
    // Variables for each subject
    int accountancy, business_studies, economics, english, physical_education;
    float total_marks, percentage;

    printf("--- Class 12th Result Calculator ---\n");

    // Input marks for each subject
    printf("Enter marks for Accountancy: ");
    scanf("%d", &accountancy);

    printf("Enter marks for Business Studies: ");
    scanf("%d", &business_studies);

    printf("Enter marks for Economics: ");
    scanf("%d", &economics);

    printf("Enter marks for English: ");
    scanf("%d", &english);

    printf("Enter marks for Physical Education: ");
    scanf("%d", &physical_education);

    // Calculate Total and Percentage
    total_marks = accountancy + business_studies + economics + english + physical_education;

    // Each subject is out of 100, so total is out of 500
    percentage = (total_marks / 5);
    printf("%d", physical_education);
    printf("======================================\n");
    printf("\t Division              ");
    printf("\n");
    if (percentage >= 60)
    {
        printf("\t First Division               ");
    }
    else
    {
        printf("\t Second Division           ");
    }
    // Display Results
    printf("\n------------------------------------\n");
    printf("Total Marks Obtained: %.2f / 500\n", total_marks);
    printf("Aggregate Percentage: %.2f  \n", percentage);
    printf("------------------------------------\n");

    return 0;
}
