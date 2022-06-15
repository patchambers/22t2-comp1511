// Creating a basic 2D while loop
// Patrick Chambers (z5264081), 15/6/22

#include <stdio.h>

#define SIZE 4

int main(void) {

    int row = 0;
    while (row < SIZE) {
    
        int col = 0;
        while (col < SIZE) {
            if (row >= 2 && col >= 2) {
                printf("X");
            } else {
                printf("-");
            }
            
            col++;
        }
        
        printf("\n");
        row++;
    }


    return 0;
}
