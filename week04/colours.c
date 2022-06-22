// Code for the colour functions
// The functions use the struct colour and enum main_colours
// Patrick Chambers (z5264081), 22/6/22

#include <stdio.h>
#include <math.h>

#define MAXI_SIZE 100

struct colour {
    int red;
    int green;
    int blue;
};

enum main_colours {
    RED,
    GREEN,
    BLUE,
    OTHER
};


enum main_colours get_main_colour(struct colour c) {
    if (c.red > c.green && c.red > c.blue) {
        return RED;
    } else if (c.green > c.red && c.green > c.blue) {
        return GREEN;
    } else if (c.blue > c.red && c.blue > c.green) {
        return BLUE;
    } else {
        return OTHER;
    }
}

double brightness(struct colour colour) {
    double sqrt_red = sqrt(colour.red);
    double sqrt_green = sqrt(colour.green);
    double sqrt_blue = sqrt(colour.blue);
    return sqrt_red + sqrt_green + sqrt_blue;
}

double average_brightness(struct colour colours[MAX_SIZE], int size) {
    double avg = 0;

    int i = 0;
    while (i < size) {
        avg += brightness(colours[i]);
        i++;
    }

    return avg / size;
}
