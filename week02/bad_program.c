// This program scans in 2 integers and prints out the first divided by the 
// second, in both integer and decimal form
// Patrick Chambers (z5264081), 9/6/22

#include <stdio.h>

// Procedure to print out an error message if the input is invalid
void print_error() {
    printf("Input is invalid\n");
}


int main(void) {

    int num_one;
    scanf("%d", &num_one);
    int num_two;
    scanf("%d", &num_two);
    
    if (num_one < num_two) {
        // If num_one is less than num_two, print error
        print_error();
    } else if (num_two == 0) {
        // num_two equals 0, print error
        print_error();        
    } else {
        // Otherwise print out num_one / num_two
        printf("num_one / num_two = %d\n", num_one / num_two);
        printf(
            "(num_one * 1.0) / (num_two * 1.0) = %lf\n", 
            (num_one * 1.0) / (num_two * 1.0)
        );
    }
    return 0;
}


