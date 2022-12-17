#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class complex{
    private:
        double real;
        double img;
    
    public:
        complex(double r, double i);
        complex();
        complex operator~();
        complex operator+(const complex& com) const;
        complex operator-(const complex& com) const;
        complex operator*(const complex& com) const;
        complex operator*(const double n) const;
        friend complex operator*(const double n, const complex& a){return a * n;}
        friend std::ostream& operator<<(std::ostream& os, const complex& com);
        friend std::istream& operator>>(std::istream& is, complex& com);
};
#endif