/***********************
 * Documentation Section
 * ---------------------
 * Program Name: Basic Structure of a C Program
 * Description: This program demonstrates different sections of a C program.
 * Author: [Thushar Harikrishna]
 * Date: [20/02/2025]
 ***********************/

/* Link Section */
#include <stdio.h>  // Standard Input-Output header
#include <math.h>   // Math functions header

/* Definition Section */
#define PI 3.1416  // Defining a constant value
#define MAX 100

/* Global Declaration Section */
int globalVariable = 10; // Global variable declaration

/* Function Prototypes (used in Sub-Program Section) */
int add(int a, int b);
void displayMessage();

void main() {  // Main Section
    /* Local Variable Declaration */
    int num1 = 5, num2 = 7, sum;

    /* Function Call */
    sum = add(num1, num2);

    /* Output the result */
    printf("Sum of %d and %d is: %d\n", num1, num2, sum);

    /* Calling another function */
    displayMessage();

    printf("%d",globalVariable);
    printf("Value of PI: %f\n", PI); // Printing PI
    printf("Value of MAX is: %d\n", MAX);
}

/* Sub Program Section */
int add(int a, int b) { // Function Definition
    return a + b;
}

void displayMessage() { // Function Definition
    printf("This is a message from the sub-program section.\n");
}

