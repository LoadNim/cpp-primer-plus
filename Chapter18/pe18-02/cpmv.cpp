#include <iostream>
#include <string>
#include "cpmv.h"

Cpmv::Cpmv(){
    pi = nullptr;
}

Cpmv::Cpmv(std::string q, std::string z){
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv& cp){
    pi = new Info;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv(Cpmv&& mv){
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv(){
    delete pi;
}

Cpmv& Cpmv::operator=(const Cpmv& cp){
    delete pi;
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
    return *this;
}

Cpmv& Cpmv::operator=(Cpmv&& mv){
    delete pi;
    pi = mv.pi;
    mv.pi = nullptr;
    return *this;
}

Cpmv Cpmv::operator+(const Cpmv& obj) const{
    pi->qcode += obj.pi->qcode;
    pi->zcode += obj.pi->zcode;
    return *this;
}

void Cpmv::Display() const{
    std::cout<<"qcode : "<<pi->qcode<<std::endl;
    std::cout<<"zcode : "<<pi->zcode<<std::endl;
}