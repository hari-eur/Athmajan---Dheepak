#include <stdio.h>


int main() {
    int choice;
    char bankName[20];
    printf("Welcome to our banking portal!\n");
    
    // Display list of banks
    printf("Please select a bank from the following:\n");
    printf("1.Bank A\n");
    printf("2.Bank B\n");
    printf("3.Bank C\n");
    
    // Take input for bank choice
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("You have selected Bank A\n");
            strcpy(bankName, "Bank A");
            break;
        case 2:
            printf("You have selected Bank B\n");
            strcpy(bankName, "Bank B");
            break;
        case 3:
            printf("You have selected Bank C\n");
            strcpy(bankName, "Bank C");
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    
    // Display banking operations and account details
    printf("\n%s banking operations:\n", bankName);
    printf("1. Savings account\n");
    printf("2. Current account\n");
    printf("3. Demat account\n");
    
    // Take input for account choice
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("You have selected Savings account\n");
            printf("Benefits of Savings account in %s : High interest rati\n", bankName);
            break;
        case 2:
            printf("You have selected Current account\n");
            printf("Benefits of Current account in %s : easy fund transfers\n", bankName);
            break;
        case 3:
            printf("You have selected Demat account\n");
            printf("Benefits of Demat account in %s : easy tradeng options\n", bankName);
            break;
        default:
            printf("Invalid choice!\n");
            return 0;
    }
    
    printf("Thank you for using our banking portal!\n");
    return 0;
}