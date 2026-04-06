#include <stdio.h>

int main()
{
    /*Menu card with GST bill
    "The Farzi's Signature" */

    int menu;
    int quantity;
    float price = 0;
    float total = 0;
    float gst;
    float final_bill;

    // Name of the Restaurant
    printf("--------Welcome to The Farzi's Signature--------\n");
    printf("\t\tMENU\n");

    // Menu Display
    printf("\nEnter 1. for  Grilled Chicken Steak    \nPrice : 450\n");
    printf("About : Served with vegetables and sauce.\n");
    printf("\nEnter 2. for Spaghetti Bolognese      \nPrice : 250\n");
    printf("About : Pasta with meat-based tomato sauce.\n");
    printf("\nEnter 3. for Fish and Chips           \nPrice : 350\n");
    printf("About : Fried fish served with crispy fries.\n");
    printf("\nEnter 4. for Beef Stroganoff          \nPrice : 400\n");
    printf("About : Beef cooked in creamy mushroom sauce.\n");
    printf("\nEnter 5. for Caesar Salad             \nPrice : 230\n");
    printf("About : Salad with lettuce, croutons, cheese, and dressing.\n");
    printf("\nEnter 6. for Full Meal                \nPrice : 1500\n");
    printf("   *** All Mentioned Dishes Included ***\n");
    printf("\nEnter 7. for Done / Generate Bill\n");

    while (1)
    {
        // User Input
        printf("\nPlease enter your choice from 1 to 6 for order.");
        scanf("%d", &menu);
        if (menu == 7)
        {
            break; // Exit loop and generate bill
        }

        if (menu == 1)
        {
            price = 450;
            printf("Grilled Chicken Steak selected. Price: 450\n");
        }
        else if (menu == 2)
        {
            price = 250;
            printf("Spaghetti Bolognese selected. Price: 250\n");
        }
        else if (menu == 3)
        {
            price = 350;
            printf("Fish and Chips selected. Price: 350\n");
        }
        else if (menu == 4)
        {
            price = 400;
            printf("Beef Stroganoff selected. Price: 400\n");
        }
        else if (menu == 5)
        {
            price = 230;
            printf("Caesar Salad selected. Price: 230\n");
        }
        else if (menu == 6)
        {
            price = 1500;
            printf("Full Meal selected. Price: 1500\n");
        }

        else
        {
            printf("Invalid choice! Please enter a number between 1 and 7.\n"); 
        }

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        total += price * quantity;

        printf("Item subtotal: %.2f | Running total: %.2f\n", price * quantity, total);
    }

    if (total == 0)
    {
        printf("\nNo items ordered!\n");
        return 0;
    }

    // Calculate GST and final bill
    gst = total * 18 / 100;
    final_bill = total + gst;

    // Print final bill
    printf("\n================================================\n");
    printf("          THE FARZI'S SIGNATURE - BILL          \n");
    printf("================================================\n");
    printf("Subtotal   = %.2f\n", total);
    printf("GST (18%%) = %.2f\n", gst);
    printf("------------------------------------------------\n");
    printf("Final Bill = %.2f\n", final_bill);
    printf("================================================\n");
    printf("       Thank you for dining with us!            \n");
    printf("================================================\n");

    return 0;
}