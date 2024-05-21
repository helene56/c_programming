// (a)
// struct {
//     double real;
//     double imaginary;
// } c1, c2, c3;

// // (b)
// struct {
//     double real;
//     double imaginary;
// } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

// // (c)
// c1 = c2;

// // (d)
// c3.real = c1.real + c2.real;
// c3.imaginary = c1.imaginary + c2.imaginary; 


// example using main()
#include <stdio.h>

int main() {
    // Declare and initialize the variables inline
    struct {
        double real;
        double imaginary;
    } c1 = {0.0, 1.0}, c2 = {1.0, 0.0}, c3;

    // Copy members of c2 into c1
    printf("c1: (%f, %f)\n", c1.real, c1.imaginary);
    c1 = c2;
    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    // Print to verify
    printf("c1: (%f, %f)\n", c1.real, c1.imaginary);
    printf("c2: (%f, %f)\n", c2.real, c2.imaginary);
    printf("c3: (%f, %f)\n", c3.real, c3.imaginary);
    return 0;
}
