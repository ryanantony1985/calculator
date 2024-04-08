// level 1.2.0.0 : CMakeLearn_calculator_project/src/main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

int main() {
    int a, b, result;
    char operation[10];

    while (1) {
        // Clear the screen
        system("clear"); // For Unix/Linux
        // system("cls"); // For Windows

        // Prompt for input
        printf("\nEnter two numbers: ");
        // Read input
        if (scanf("%d %d", &a, &b) != 2) {
            printf("Invalid input. Please try again.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        // Prompt for operation
        printf("Enter operation (+, -, *, /, q to quit): ");
        // Read operation
        if (scanf("%s", operation) != 1) {
            printf("Invalid operation. Please try again.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        // Check if user wants to quit
        if (strcmp(operation, "q") == 0 || strcmp(operation, "Q") == 0) {
            printf("Closing the calculator.\n");
            break;
        }

        // Perform operation based on user input
        if (strcmp(operation, "+") == 0) {
            result = add(a, b);
        } else if (strcmp(operation, "-") == 0) {
            result = subtract(a, b);
        } else if (strcmp(operation, "*") == 0) {
            result = multiply(a, b);
        } else if (strcmp(operation, "/") == 0) {
            result = divide(a, b);
        } else {
            printf("Invalid operation. Please try again.\n");
            continue;
        }
        
        // Display the result
        printf("Result: %d\n", result);

        // Prompt to continue
        printf("\nPress Enter to continue...");
        while (getchar() != '\n'); // Wait until Enter key is pressed
        getchar(); // Clear the Enter key from the input buffer
    }
    
    return 0;
}
