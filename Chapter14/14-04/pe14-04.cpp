#include <iostream>
#include <ctime>
#include "person.h"

int main(){
    using std::cout;
    using std::endl;

    srand((unsigned int)time(nullptr));

    Person p("Load", "Nim");
    p.show();
    cout<<endl;
    Gunslinger g(p, 10, 1.7);
    g.show();
    cout<<endl;
    BadDude b1(p);
    b1.show();
    cout<<endl;
    BadDude b2(g);
    b2.show();
}