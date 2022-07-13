// Program to demo using the fgets function to scan in strings
// Patrick Chambers (z5264081), 13/7/22

#include <stdio.h>

#define MAX_SIZE 256

int main(void) {

    printf("Using fgets to scan in a single line: \n");

    char string[MAX_SIZE];
    // scan in a single line of input
    // Uses stdin as the input stream to read user input from the terminal
    fgets(string, MAX_SIZE, stdin);

    // Print out the inputted string using the "%s" format
    // fgets scans in the inputted newline from the user pressing enter, so it
    // will print this newline as well
    printf(">>> %s", string);
    printf("\n");
    
    printf("Using fgets in a loop: \n");
    
    // Loop until EOF is reached
    // fgets returns NULL when EOF is reached and there is no more input to 
    // scan in
    while (fgets(string, MAX_SIZE, stdin) != NULL) {
        printf(">>> %s", string);
    }

    return 0;
}
