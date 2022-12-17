#include <iostream>
#include <ctime>
#include "stonewt2.h"

int main(){
    srand(time(0));
    using std::cout;
    using std::endl;

    stonewt a(15, 57.0, stonewt::Mode::sap);
    stonewt b(1007.0, stonewt::Mode::p);
    stonewt c;
    stonewt d;
    stonewt e;

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl<<endl;

    cout<<"c = a + b 연산"<<endl;
    c = a + b;
    cout<<"c : "<<c<<endl<<endl;

    cout<<"d = a - b 연산"<<endl;
    d = a - b;
    cout<<"d : "<<d<<endl<<endl;

    cout<<"e = a * b 연산"<<endl;
    e = a * b;
    cout<<"e : "<<e<<endl<<endl;
}