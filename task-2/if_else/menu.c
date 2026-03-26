#include <stdio.h>

int main()
{
    /*Menu card with gst bill
    "The Farzi's SIgnature*/
    int menu;
    float price = 0, total;
    float gst;
    // Name of the Resturant
    printf("--------Welcome to The Farzi's Signature--------\n");
    printf("\tMENU\n");
    // Menu
    printf("\n1. Grilled Chicken Steak    \nPrice : 450\n");
    printf("About : Served with vegetables and sauce.\n");
    printf("\n2. Spaghetti Bolognese     \nPrice : 250\n");
    printf("About : Pasta with meat-based tomato sauce.\n");
    printf("\n3. Fish and Chips          \nPrice : 350\n");
    printf("About : Fried fish served with crispy fries.\n");
    printf("\n4. Beef Stroganoff         \nPrice : 400\n");
    printf("About : Beef cooked in creamy mushroom sauce.\n");
    printf("\n5. Caesar Salad            \nPrice : 230\n");
    printf("About : Salad with lettuce, croutons, cheese, and dressing.\n");
    printf("\n6. Full Meal               \nPrice : 1500\n");
    printf("********'All Mentioned Dishes Include'********\n");
    float final_bill;
    int quantity;
    while (1)
    {

        // User Input
        printf("\nEnter your choice: ");
        scanf("%d", &menu);

        if (menu == 1)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            price = 450;
            printf("Grilled Chicken Steak\n");
            printf("Price : 450\n");
        }
        else if (menu == 2)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            price = 250;
            printf("Spaghetti Bolognese\n");
            printf("Price : 250\n");
        }
        else if (menu == 3)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            price = 350;
            printf("Fish and Chips\n");
            printf("Price : 350\n");
        }
        else if (menu == 4)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            price = 400;
            printf("Beef Stroganoff\n");
            printf("Price : 400\n");
        }
        else if (menu == 5)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            price = 230;
            printf("Caesar Salad\n");
            printf("Price : 230\n");
        }
        else if (menu == 6)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            price = 1500;
            printf("Full Meal\n");
            printf("1500\n");
        }
        printf("\nEnter your choice (7 to exit): ");
        scanf("%d", &menu);

        if (menu == 7)
            break;

        else
        {
            printf("invalde");
        }
        printf("Enter quantity: ");
    scanf("%d", &quantity);
    final_bill += price * quantity; 
    }
    // calculate total price

    total = price * quantity;
    printf("\nTotal Bill = %.2f\n", total);
    // calculating final bill
    gst = total * 18 / 100;
    final_bill = total + gst;
    printf("GST = %.2f\n", gst);
    printf("Final Bill = %.2f\n", final_bill);
    return 0;
}