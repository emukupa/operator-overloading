#ifndef RATIONAL_INTERFACE
#define RATIONAL_INTERFACE

class Rational
{
    int n = 0;
    int d = 1;

public:
    Rational(int numerator = 0, int denominator = 1); // constructor
    Rational(const Rational &rhs);                    // copy constructor
    ~Rational();                                      // destructor
};
#endif // !RATIONAL_INTERFACE