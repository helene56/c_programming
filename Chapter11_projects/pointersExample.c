#include <stdio.h>

// a remains 5
// void incrementByValue(int num) {
//     num = num + 1;
// }

// int main() {
//     int a = 5;
//     incrementByValue(a);  // a is still 5 after this function call
//     printf("%d\n", a);
// }

// a becomes 6
// void incrementByReference(int *num) {
//     *num = *num + 1;
// }

// int main() {
//     int a = 5;
//     incrementByReference(&a);  // a becomes 6 after this function call
//     printf("%d\n", a);
// }


int main() {
    int x = 10;
    int *ptr = &x;

    // Printing the value at the address pointed by ptr
    printf("Value at pointer: %d\n", *ptr);

    // Printing the address stored in ptr (address of x)
    printf("Address held by pointer: %p\n", (void *)ptr);

    // Printing the address of the pointer itself
    printf("Address of pointer: %p\n", (void *)&ptr);

    return 0;
}


