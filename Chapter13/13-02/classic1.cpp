#include <iostream>
#include <cstring>
#include "classic1.h"


Cd::Cd(const char* s1, const char* s2, const int n, const double x){
    performers = new char[strlen(s1) + 1];
    label = new char[strlen(s2) + 1];
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd& d){
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    performers = nullptr;
    label = nullptr;
    selections = playtime = 0;
}

Cd::~Cd(){
    delete []performers;
    delete []label;
}

void Cd::Report() const{
    using std::cout;
    using std::endl;

    cout<<"연주자 : "<<performers<<endl;
    cout<<"레이블 : "<<label<<endl;
    cout<<"수록수 : "<<selections<<endl;
    cout<<"곡길이 : "<<playtime<<endl;
}

Cd& Cd::operator=(const Cd& d){
    delete []performers;
    delete []label;
    performers = new char[strlen(d.performers) + 1];
    label = new char[strlen(d.label) + 1];
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char* s1, const char* s2, const char* s3, const int n, const double x) : Cd(s2, s3, n, x){
    representative = new char[strlen(s1) + 1];
    strcpy(representative, s1);
}

Classic::Classic(const Cd& d, const char* s1) : Cd(d){
    representative = new char[strlen(s1) + 1];
    strcpy(representative, s1);
}

Classic::Classic(){
    representative = nullptr;
}

Classic::~Classic(){
    delete []representative;
}

void Classic::Report() const{
    Cd::Report();
    std::cout<<"대표곡 : "<<representative<<std::endl;
}

Classic& Classic::operator=(const Classic& d){
    Cd::operator=(d);
    delete []representative;
    representative = new char[strlen(d.representative) + 1];
    strcpy(representative, d.representative);
    return *this;
}