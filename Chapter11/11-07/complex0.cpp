#include <iostream>
#include "complex0.h"

complex::complex(double r, double i){
    real = r, img = i;
}

complex::complex(){
    real = img = 0;
}

complex complex::operator~(){
    return complex(real, -img);
}

complex complex::operator+(const complex& com) const{
    return complex(real + com.real, img + com.img);
}

complex complex::operator-(const complex& com) const{
    return complex(real - com.real, img - com.img);
}

complex complex::operator*(const complex& com) const{
    return complex((real * com.real) - (img * com.img), (real * com.img) + (img * com.real));
}

complex complex::operator*(const double n) const{
    return complex(real * n, img * n);
}

std::ostream& operator<<(std::ostream& os, const complex& com){
    os<<"("<<com.real<<","<<com.img<<"i)";
    return os;
}

std::istream& operator>>(std::istream& is, complex& com){
    std::cout<<"실수부: ";
    if(!(is>>com.real)) return is;
    std::cout<<"허수부: ";
    is>>com.img;
    return is;
}