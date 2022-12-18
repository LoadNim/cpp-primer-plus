#include <iostream>
#include <cstring>
#include "cow.h"

Cow::Cow(){
    strcpy(name, nullptr);
    hobby = new char[1];
    strcpy(hobby, nullptr);
    weight = 0;
}

Cow::Cow(const char* nm, const char* ho, double wt){
    strcpy(name, nm);
    hobby = new char[strlen(ho)+1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow& c){
    strcpy(name, c.name);
    hobby = new char[strlen(c.hobby)+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow(){
    delete []hobby;
}

Cow& Cow::operator=(const Cow& c){
    delete []hobby;
    hobby = new char[strlen(c.hobby)+1];
    strcpy(name, c.name);
    strcpy(hobby, c.hobby);
    weight = c.weight;
}

void Cow::ShowCow() const{
    using std::cout;
    using std::endl;

    cout<<"이름 : "<<name<<endl;
    cout<<"취미 : "<<hobby<<endl;
    cout<<"몸무게 : "<<weight<<endl;
}