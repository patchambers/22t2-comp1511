// Bad program to print out integer / integer or double / double
// Patrick Chambers (z5264081), 8/6/22


#include <stdio.h>

void print_error() {
    printf("ERROR: input invalid\n");
}


int main(void) {

    // scan in a and b
    int a;
    int b;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    if (a < b) {
        // if first int smaller than second, error (procedure)
        print_error();
    } else if (b == 0) {
        // if second int equals 0, error
        print_error();
    } else {
        // print a/b, print (a*1.0) / (b*1.0)
        printf("a/b = %d\n", a / b);
        printf("(a * 1.0) / (b * 1.0) = %lf\n", (a * 1.0) / (b * 1.0));
    }
    
    printf("0.3 - 0.1 = %lf\n", 0.3 - 0.1);
    
    return 0;
}



