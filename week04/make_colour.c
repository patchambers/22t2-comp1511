// Function to return a struct colour based on the colour values the user inputs
// Patrick Chambers (z5264081), 22/6/22

#include <stdio.h>

struct colour {
    int red;
    int green;
    int blue;
};

enum main_colours {
    RED,
    GREEN,
    BLUE,
};

struct colour make_colour(int red, int green, int blue);


int main(void) {
    
    // Make a new colour and set it to be purple
    struct colour new_colour = make_colour(150, 20, 180);
    
    printf("red  : %d\n", new_colour.red);
    printf("green: %d\n", new_colour.green);
    printf("blue : %d\n", new_colour.blue);

    return 0;
}

// Makes a struct colour with the specified RGB values
// Takes in 3 integers representing the red, green and blue values
// Returns the struct colour initialised with the given RGB values
struct colour make_colour(int red, int green, int blue) {
    struct colour new_colour;
    new_colour.red = red;
    new_colour.green = green;
    new_colour.blue = blue;
    
    return new_colour;
}
