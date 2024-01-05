#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex add(Complex a, Complex b) {
    Complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

Complex subtract(Complex a, Complex b) {
    Complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}

Complex multiply(Complex a, Complex b) {
    Complex c;
    c.real = a.real * b.real - a.imag * b.imag;
    c.imag = a.real * b.imag + a.imag * b.real;
    return c;
}

int main() {
    Complex a, b, c;

    printf("Enter the real and imaginary parts of the first complex number: ");
    scanf("%f %f", &a.real, &a.imag);

    printf("Enter the real and imaginary parts of the second complex number: ");
    scanf("%f %f", &b.real, &b.imag);

    c = add(a, b);
    printf("Sum = %.2f + %.2fi\n", c.real, c.imag);

    c = subtract(a, b);
    printf("Difference = %.2f + %.2fi\n", c.real, c.imag);

    c = multiply(a, b);
    printf("Product = %.2f + %.2fi\n", c.real, c.imag);

    return 0;
}
