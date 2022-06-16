// Demonstration of struct and enum definitions and use
// thu15-kora
// Patrick Chambers (z5264081), 16/6/22

#include <stdio.h>

enum species {
    dog, 
    cat, 
    rabbit
};

struct pet {
    int age;
    double weight;
    char sex;
    double height;
    // "enum species" is the variable type
    // "pet_species" is the variable name
    enum species pet_species;
    int number
};


int main(void) {

    // "struct pet" is the variable type
    // "delta" is the variable name
    struct pet delta;
    delta.age = 2;
    delta.pet_species = dog;
    
    printf("Delta is %d years old\n", delta.age);
    // This prints the index of "dog" within the enum species, it doesn't print 
    // the word dog!
    printf("Delta is a %d\n", delta.pet_species);
    
    if (delta.pet_species == dog) {
        printf("You should take Delta for a walk every morning\n");
    }

    return 0;
}


