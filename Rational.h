#ifndef RATIONAL_INTERFACE
#define RATIONAL_INTERFACE
#include <string>

class Rational
{
    int n = 0;
    int d = 1;

public:
    Rational(int numerator = 0, int denominator = 1); // constructor
    Rational(const Rational &rhs);                    // copy constructor
    ~Rational();                                      // destructor
    int numerator() const;
    int denominator() const;
    Rational &operator=(const Rational &);
    Rational reduce() const;        // reduce fraction
    std::string string() const;     // return a formatted STL string
    std::string raw_string() const; // return a non-reduced STL string
    Rational operator+(const Rational &) const;
    Rational operator-(const Rational &) const;
    Rational operator*(const Rational &) const;
    Rational operator/(const Rational &) const;
};
#endif // !RATIONAL_INTERFACE