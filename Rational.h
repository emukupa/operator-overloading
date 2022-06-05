#ifndef RATIONAL_INTERFACE
#define RATIONAL_INTERFACE

class Rational
{
    int n = 0;
    int d = 1;

public:
    Rational(int numerator = 0, int denominator = 1) : n(numerator), d(denominator);
    ~Rational()
};
#endif // !RATIONAL_INTERFACE