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