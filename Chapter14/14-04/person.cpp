#include <iostream>
#include <string>
#include "person.h"

using std::cout;
using std::cin;
using std::endl;

void Person::show() const{
    cout<<first_name<<", "<<last_name<<endl;
}

void Gunslinger::show() const{
    Person::show();
    cout<<"draw time : "<<time<<endl;
    cout<<"notch : "<<notch<<endl;
}

void BadDude::show(){ 
    Gunslinger::show();
    cout<<"draw time : "<<gdraw()<<endl<<"card draw : "<<cdraw()<<endl;
}