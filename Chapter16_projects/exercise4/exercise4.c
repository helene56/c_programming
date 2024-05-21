// (a)
typedef struct {
    double real;
    double imaginary;
} Complex;

// (b)
Complex c1, c2, c3;

// (c)
Complex make_complex(double real, double imaginary)
{
    Complex c;
    c.real = real;
    c.imaginary = imaginary;
    return c;
}
// notes: could have used a compound literal as C99+ allows for this
Complex make_complex(double real, double imaginary) {
    return (Complex) {real, imaginary};
}

// (d)
Complex add_complex(Complex c1, Complex c2)
{
    return (Complex) {.real = c1.real + c2.real, .imaginary = c1.imaginary + c2.imaginary};
}