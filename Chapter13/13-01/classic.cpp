#include <iostream>
#include <cstring>
#include "classic.h"

Cd::Cd(char* s1, char* s2, int n, double x){
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd& d){
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
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
    if(this == &d) return *this;
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(char* s1, char* s2, char* s3, int n, double x) : Cd(s2, s3, n, x){
    strcpy(representative, s1);    
}

Classic::Classic(const Cd& d, char* s1) : Cd(d){
    strcpy(representative, s1);
}

void Classic::Report() const{
    Cd::Report();
    std::cout<<"대표곡 : "<<representative<<std::endl;
}

Classic& Classic::operator=(const Classic& d){
    Cd::operator=(d);
    strcpy(representative, d.representative);
    return *this;
}