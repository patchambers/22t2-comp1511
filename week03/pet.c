// Program to demonstrate use of structs and enums
// Patrick Chambers (z5264081), 15/6/22

#include <stdio.h>

enum species{
    dog, 
    cat, 
    rabbit
};

struct pet {
    int age;
    double weight;
    double height; 
    enum species type;
};

int main(void) {

    // Remember that the variable type is "struct pet", not just "struct"
    struct pet puppy;
    puppy.age = 1;
    puppy.weight = 4.21;
    puppy.height = 0.45;
    puppy.type = dog;
    
    printf("This pet is %d year(s) old\n", puppy.age);
    if (puppy.type == dog) {
        printf("This pet will grow up to be a strong independent dog\n");
    }

    return 0;
    
}
