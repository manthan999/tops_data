#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0;
    char continueOrder;

    // Display the menu using appropriate codes
    printf("======== WELCOME TO FOOD BILLING SYSTEM ========\n");
    printf("======== MENU ========");
    printf("\nCode\tItem\t\tPrice\n");
    printf("1\tPizza\t\tRs. 150\n");
    printf("2\tBurger\t\tRs. 100\n");
    printf("3\tPasta\t\tRs. 120\n");
    printf("4\tSandwich\tRs. 90\n");
    printf("5\tCoffee\t\tRs. 50\n");

    // Use do-while loop to allow multiple orders
    do {
        // Taking user choice
        printf("\nEnter the code of the item you want to order: ");
        scanf("%d", &choice);

        // Taking quantity
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        // Using switch-case to calculate bill based on selection
        switch(choice) {
            case 1:
                total += 150 * quantity;
                break;
            case 2:
                total += 100 * quantity;
                break;
            case 3:
                total += 120 * quantity;
                break;
            case 4:
                total += 90 * quantity;
                break;
            case 5:
                total += 50 * quantity;
                break;
            default:
                printf("Invalid choice! Please enter a valid code.\n");
        }

        // Ask user if they want to continue ordering
        printf("Do you want to order more? (y/n): ");
        scanf(" %c", &continueOrder); // space before %c to clear buffer

    } while (continueOrder == 'y');

    // Final bill output
    printf("\n=====================================\n");
    printf("Total Bill Amount = Rs. %.2f\n", total);
    printf("Thank you for ordering!\n");
    printf("=====================================\n");


}
