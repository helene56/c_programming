// write a parameterized macros that compute the following values.
// a. the cube of x
// b. the remainder when n is divided by 4
// c. 1 if the product of x and y is less than 100, 0 otherwise

#define CUBE(x) (x*x)

int main()
{
    printf("%d", CUBE(2));
}