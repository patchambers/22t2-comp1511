// Basics of declaring and using strings
// Patrick Chambers (z5264081), 13/7/22

#include <stdio.h>
#include <string.h>

#define SIZE 64

// Manually prints out a string, one character at a time.
// Should behave like printf("%s\n");
void print_string(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        printf("%c", string[i]);
        i++;
    }
    printf("\n");
}

int main (void) {
    char tom[SIZE] = "Tom Kunc";

    char will[] = "Will Setiawan";
    
    char rifa[SIZE]; 
    // rifa = "Rifa Jamal";
    strcpy(rifa, "Rifa Jamal");

    print_string(tom);
    print_string(will);
    print_string(rifa);
    return 0;
}
