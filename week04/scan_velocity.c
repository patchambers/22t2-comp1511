// Scans velocity values into an array until the program receives EOF
// Calculates the average of the last 5 values
// Patrick Chambers (z5264081), 22/6/22

#include <stdio.h>

#define MAX_SIZE 128

int main(void) {

    double velocity_array[MAX_SIZE];
    
    int i = 0;
    // Scan until EOF is signalled. When EOF is signalled (this can be done by 
    // pressing ctrl-D), the scanf will return EOF, so this condition will be 
    // false
    while (scanf("%lf", &velocity_array[i]) == 1) {
        i++;
    }
    
    // ... 3 4 5 6 7 8 9(i)
    // In this example, we scanned in values up to index 8, so i - 5 gives us 
    // index 4 (5 indices from the end) 
    // The "5" could be #define'd to make this easier to read
    int velocity_index = i - 5; 
    double velocity_sum = 0;
    // Calculate average of last 5 values
    while (velocity_index < i) {
        velocity_sum = velocity_sum + velocity_array[velocity_index];
        velocity_index++;
    }
    
    double avg_velocity = velocity_sum / 5;
    
    printf("The average of the last 5 velocities is %lf\n", avg_velocity);
    
    return 0;
}
