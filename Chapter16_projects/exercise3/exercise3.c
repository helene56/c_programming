// (a)
struct complex {
    double real;
    double imaginary;
};

// (b)
struct complex c1, c2, c3;

// (c)
struct complex make_complex(double real, double imaginary)
{
    struct complex c;
    c.real = real;
    c.imaginary = imaginary;
    return c;
}
// notes: could have used a compound literal as C99+ allows for this
struct complex make_complex(double real, double imaginary) {
    return (struct complex) {real, imaginary};
}

// (d)
struct complex add_complex(struct complex c1, struct complex c2)
{
    return (struct complex) {.real = c1.real + c2.real, .imaginary = c1.imaginary + c2.imaginary};
}