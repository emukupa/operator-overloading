#include <iostream>
#include "Rational.h"

std::ostream &operator<<(std::ostream &o, const Rational &r)
{
    // return o << r.raw_string();
    return o << r.string();
}

int main()
{
    Rational a = 7; // 7/1
    std::cout << "a is: " << a << std::endl;

    Rational b(25, 15); // 5/3
    std::cout << "b is: " << b << std::endl;

    Rational c = b; // copy constructor
    std::cout << "c is: " << c << std::endl;

    Rational d; // default constructor
    std::cout << "d is: " << d << std::endl;

    d = c; // assignment
    std::cout << "d is: " << d << std::endl;

    Rational &e = d; // reference
    d = e;           // assignment to self!
    std::cout << "e is: " << e << std::endl;

    std::cout << std::endl;
    std::cout << "d is: " << d.string() << std::endl;

    std::cout << std::endl;
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
    std::cout << a << " * " << b << " = " << a * b << std::endl;
    std::cout << a << " / " << b << " = " << a / b << std::endl;
    // std::cout << a << " + " << b << " = " << a + b << std::endl;

    return 0;
}