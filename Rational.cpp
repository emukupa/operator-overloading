#include "Rational.h"

Rational::Rational(int numerator, int denominator) : n(numerator), d(denominator) {}
Rational::Rational(const Rational &rhs) : n(rhs.n), d(rhs.d) {}
Rational::~Rational() {}