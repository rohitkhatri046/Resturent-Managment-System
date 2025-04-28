#include <stdio.h>
#include <time.h>
#include <string.h>

#define CST_RATE 0.10

int tokenNumber = 1;

void displayHeading() {
    printf("\n**************************************************\n");
    printf("*                                                  *\n");
    printf("*              WELCOME TO YOUR DREAM RESTAURANT    *\n");
    printf("*                                                  *\n");
    printf("****************************************************\n");
    printf("*                                                  *\n");
    printf("*          Where Comfort Meets Elegance            *\n");
    printf("*                                                  *\n");
    printf("*       Your Sanctuary of Peace and Happiness      *\n");
    printf("*                                                  *\n");
    printf("****************************************************\n");
}


// Display the menu for different categories
void displayMenu() {
    printf("\n--- Restaurant Menu ---\n");
    printf("1. Starters:\n");
    printf("   a. Soup                -  Rs: 80\n");
    printf("   b. Spring Rolls        -  Rs: 250\n");
    printf("   c. Nachos              -  Rs: 250\n");
    printf("   d. Chicken Wings       -  Rs: 750\n");
    printf("   e. French Fries        -  Rs: 120\n");
    printf("   f. Onion Rings         -  Rs: 100\n");
    printf("   g. Finger Fish         -  Rs: 1036\n");
    printf("2. Main Course:\n");
    printf("   a. Pizza               -  Rs: 900\n");
    printf("   b. Pasta               -  Rs: 350\n");
    printf("   c. Burger              -  Rs: 400\n");
    printf("   d. Chicken Roll        -  Rs: 250\n");
    printf("   e. Chicken cheese Roll -  Rs: 280\n");
    printf("   f. Resmi Kabab Roll    -  Rs: 240\n");
    printf("3. Desserts:\n");
    printf("   a. Ice Cream           -  Rs: 80\n");
    printf("   b. Cake                -  Rs: 250\n");
    printf("   c. Chocolate lava      -  Rs: 230\n");
    printf("   d. Cake Slice          -  Rs: 360\n");
    printf("   e. Fudge Browine       -  Rs: 180\n");
    printf("   f. Whole Cake          -  Rs: 2030\n");
    printf("4. Cold Beverages:\n");
    printf("   a. Mineral water       -  Rs: 60\n");
    printf("   b. Slush Drink         -  Rs: 170\n");
    printf("   c. Sting               -  Rs: 80\n");
    printf("   d. Pupsi               -  Rs: 70\n");
    printf("   e. Slice               -  Rs: 70\n");
    printf("   f. Mint Lemonada       -  Rs: 150\n");
    printf("   g. Next                -  Rs: 130\n");
    
}

void printDateTime() {
    time_t now;
    time(&now);
    printf("\n--- Date & Time: %s", ctime(&now));	
}

void takeOrder() {
    char userName[50];
    int category, quantity, tableNumber;
    char item, anotherOrder, orderType;
    float total = 0, subTotal = 0, cst, grandTotal;
    int paymentMethod;

    // Ask for the user's name
    printf("\nEnter your name: ");
    scanf(" %[^\n]%*c", userName);

    // Ask for the order type: Dining or Home Delivery
    printf("\nChoose Order Type:\n");
    printf("1. Dining\n");
    printf("2. Home Delivery\n");
    printf("Enter your choice: ");
    scanf(" %c", &orderType);

    if (orderType == '1') {
        printf("\nEnter your table number: ");
        scanf("%d", &tableNumber);
        printf("Your table number is: %d\n", tableNumber);
    } else if (orderType == '2') {
        printf("Home delivery selected.\n");
    } else {
        printf("Invalid order type. Exiting order process.\n");
        return; // Exit the function
    }

    printf("Your order token number is: %d\n", tokenNumber);

    printf("\nSelect Payment Method:\n");
    printf("1. Cash\n");
    printf("2. Credit/Debit Card\n");
    printf("3. Digital Wallet\n");
    printf("Enter your choice: ");
    scanf("%d", &paymentMethod);

    do {
        printf("\nEnter the menu category (1-4): ");
        scanf("%d", &category);

        if (category < 1 || category > 4) {
            printf("Invalid category! Please choose a valid category (1-3).\n");
            break;
        }

        switch (category) {
            case 1:
                printf("Starters:\n");
                printf("   a. Soup         -  Rs: 80\n");
                printf("   b. Spring Rolls -  Rs: 250\n");
                printf("   c. Nachos       -  Rs: 250\n");
                printf("   d. Chicken Wings-  Rs: 750\n");
                printf("   e. French Fries -  Rs: 120\n");
                printf("   f. Onion Rings  -  Rs: 100\n");
                printf("   g. Finger Fish  -  Rs: 1036\n");
                printf("Choose an item: ");
                scanf(" %c", &item);
                subTotal = 0; 
                if (item == 'a') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 80;
                } else if (item == 'b') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 250;
                } else if (item == 'c') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 250;
                } else if (item == 'd') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 750;
                } else if (item == 'e') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 120;
                } else if (item == 'f') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 100;
                } else if (item == 'g') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 1036;   
				}else {
                    printf("Invalid choice for Starters.\n");
                    continue;
                }
                printf("Subtotal: Rs: %.2f\n", subTotal);
                break;
            case 2:
            	printf("2. Main Course:\n");
    			printf("   a. Pizza               -  Rs: 900\n");
     			printf("   b. Pasta               -  Rs: 350\n");
    			printf("   c. Burger              -  Rs: 400\n");
    			printf("   d. Chicken Roll        -  Rs: 250\n");
    			printf("   e. Chicken cheese Roll -  Rs: 280\n");
    			printf("   f. Resmi Kabab Roll    -  Rs: 240\n");
                printf("Choose an item:");
                scanf(" %c", &item);
                subTotal = 0; // Reset subtotal for each item selection
                if (item == 'a') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 900;
                } else if (item == 'b') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 350;
                } else if (item == 'c') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 400;
                } else if (item == 'd') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 250;
                } else if (item == 'e') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 280;
                } else if (item == 'f') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 240;
                } else {
                    printf("Invalid choice for Main Course.\n");
                    continue;
                }
                printf("Subtotal: Rs: %.2f\n", subTotal);
                break;
            case 3:
            	printf("3. Desserts:\n");
   				printf("   a. Ice Cream           -  Rs: 80\n");
    			printf("   b. Cake                -  Rs: 250\n");
    			printf("   c. Chocolate lava      -  Rs: 230\n");
    			printf("   d. Cake Slice          -  Rs: 360\n");
    			printf("   e. Fudge Browine       -  Rs: 180\n");
    			printf("   f. Whole Cake          -  Rs: 2030\n");
                printf("Choose an item: ");
                scanf(" %c", &item);
                subTotal = 0; // Reset subtotal for each item selection
                if (item == 'a') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 80;
                } else if (item == 'b') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 250;
                } else if (item == 'c') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 230;
				} else if (item == 'd') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 360;
				} else if (item == 'e') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 180;
				} else if (item == 'f') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 2030;			    
                } else {
                    printf("Invalid choice for Desserts.\n");
                    continue;
                }
                printf("Subtotal: Rs: %.2f\n", subTotal);
                break;
            case 4:
            	printf("4. Cold Beverages:\n");
   				printf("   a. Mineral water       -  Rs: 60\n");
    			printf("   b. Slush Drink         -  Rs: 170\n");
    			printf("   c. Sting               -  Rs: 80\n");
    			printf("   d. Pupsi               -  Rs: 70\n");
    			printf("   e. Slice               -  Rs: 70\n");
    			printf("   f. Mint Lemonada       -  Rs: 150\n");
    			printf("   g. Next                -  Rs: 130\n");
 
                printf("Choose an item: ");
                scanf(" %c", &item);
                subTotal = 0; // Reset subtotal for each item selection
                if (item == 'a') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 60;
                } else if (item == 'b') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 170;
                } else if (item == 'c') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 80;
				} else if (item == 'd') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 70;
				} else if (item == 'e') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 150;
				} else if (item == 'f') {
                    printf("Enter quantity: ");
                    scanf("%d", &quantity);
                    subTotal = quantity * 130;			    
                } else {
                    printf("Invalid choice for Cold Berverages.\n");
                    continue;
                }
                printf("Subtotal: Rs: %.2f\n", subTotal);
                break;    
                
        }

        total += subTotal;
        printf("Do you want to place another order? (y/n): ");
        scanf(" %c", &anotherOrder);
    } while (anotherOrder == 'y' || anotherOrder == 'Y');

    cst = total * CST_RATE;
    grandTotal = total + cst;

    // Display Final Bill
    printf("\n--- Final Bill for %s ---\n", userName);
    printf("Token Number: %d\n", tokenNumber);
    if (orderType == '1') {
        printf("Table Number: %d\n", tableNumber);
    } else {
        printf("Home Delivery\n");
    }
    printf("Total: Rs: %.2f\n", total);
    printf("CST (10%%): Rs: %.2f\n", cst);
    printf("Grand Total: Rs: %.2f\n", grandTotal);
    printf("Payment Method: ");
    switch (paymentMethod) {
        case 1:
            printf("Cash\n");
            break;
        case 2:
            printf("Credit/Debit Card\n");
            break;
        case 3:
            printf("Digital Wallet\n");
            break;
        default:
            printf("Unknown (Invalid Selection)\n");
    }
    printf("Thank you for dining with us, %s! Have a great day!\n", userName);

    tokenNumber++;
}

int main() {
    int choice;

    do {
        displayHeading();
        printDateTime();
        printf("\n1. View Menu\n");
        printf("2. Place Order\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayMenu();
                break;
            case 2:
                takeOrder();
                break;
            case 3:
                printf("Exiting the system. Thank you!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

