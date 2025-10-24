// level 1.2.0.0 : CMakeLearn_calculator_project/src/main
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"

int main() {
    // Initialize variables
    // need to change result to float to accommodate add_float
    float fa,fb,fresult;
    int a, b, result;
    char operation[10];

    while (1) {
        // Clear the screen
        system("clear"); // For Unix/Linux
        // system("cls"); // For Windows


        // Prompt for input type
        printf("Select input type:\n");
        printf("1. Integer\n");
        printf("2. Float\n");
        printf("Enter choice (1 or 2): ");
        int choice;
        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice. Please try again.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }
        if (choice == 2) {
            // Float input
            printf("\nEnter two float numbers: ");
            float x, y;
            if (scanf("%f %f", &x, &y) != 2) {
                printf("Invalid input. Please try again.\n");
                while (getchar() != '\n'); // Clear input buffer
                continue;
            }

            // Prompt for operation
            printf("Enter operation (+, -, *, /, q to quit): ");
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
                fresult = add_float(x, y);
                printf("Result: %.2f\n", fresult);
            } else if (strcmp(operation, "-") == 0) {
                printf("Operation not supported for float numbers yet.\n");
            } else if (strcmp(operation, "*") == 0) {
                printf("Operation not supported for float numbers yet.\n");
            } else if (strcmp(operation, "/") == 0) {
                printf("Operation not supported for float numbers yet.\n");
            } else {
                printf("Invalid operation. Please try again.\n");
            }
            continue;

            // Prompt to continue
            printf("\nPress Enter to continue...");
            while (getchar() != '\n'); // Wait until Enter key is pressed
            getchar(); // Clear the Enter key from the input buffer
            continue;
        }
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
            // result = add(a, b);
            // veriables a and b are integers, but add_float expects floats
             fa = (float)a;
             fb = (float)b;
            result = add_float(fa, fb);
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
