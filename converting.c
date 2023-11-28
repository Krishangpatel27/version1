// Include the header file
#include "converting.h"

// Define a compiler flag to disable warnings related to certain functions
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80  // Define a constant value for the maximum size of a string buffer

void converting(void)
{
    // Version 1 - Demonstrate conversion of strings to integers using atoi()
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Declare variables
    char intString[BUFFER_SIZE];  // Define a character array to hold the string input from the user
    int intNumber;  // Define an integer variable to hold the converted numeric value

    do {
        printf("Type an integer numeric string (type 'q' to quit):\n");
        // Read a string from standard input and store it in the buffer
        fgets(intString, BUFFER_SIZE, stdin);
        intString[strlen(intString) - 1] = '\0';  // Remove the newline character at the end of the string

        // Convert the string to an integer using the atoi() function
        if (strcmp(intString, "q") != 0)
        {
            intNumber = atoi(intString); // Convert the string to an integer
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intString, "q") != 0);  // Continue looping until the user inputs "q"

    printf("*** End of Converting Strings to int Demo ***\n\n");
}


