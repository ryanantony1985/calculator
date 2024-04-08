// level 1.1.1.2 : CMakeLearn_calculator_project/src/arithmetic/divide

#include <stdio.h>

int divide(int a, int b) {
    if (b != 0)
        return a / b;
    else {
        printf("Error: Division by zero\n");
        return 0;
    }
}
