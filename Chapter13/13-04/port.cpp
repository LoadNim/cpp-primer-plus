#include <iostream>
#include <cstring>
#include "port.h"

Port::Port(const char* br, const char* st, int b){
    brand = new char[strlen(br) + 1];
    strcpy(brand, br);
    strcpy(style, st);
    bottles = b;
}

Port::Port(const Port& p){
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
}

Port& Port::operator=(const Port& p){
    delete []brand;
    brand = new char[strlen(p.brand) + 1];
    strcpy(brand, p.brand);
    strcpy(style, p.style);
    bottles = p.bottles;
    return *this;
}

Port& Port::operator+=(int b){
    bottles += b;
    return *this;
}

Port& Port::operator-=(int b){
    if(bottles >= b) bottles -= b;
    else std::cout<<"병이 모자랍니다!\n";
    return *this;
}

void Port::show() const{
    using std::cout;
    using std::endl;

    cout<<"브랜드 : "<<brand<<endl;
    cout<<"스타일 : "<<style<<endl;
    cout<<"수량 : "<<bottles<<endl;
}

std::ostream& operator<<(std::ostream& os, const Port& p){
    os<<p.brand<<", "<<p.style<<", "<<p.bottles;
    return os;
}

VintagePort::VintagePort(){
    nickname = new char[5];
    strcpy(nickname, "none");
    year = 0;
}

VintagePort::VintagePort(const char* ni, const char* br, const char* st, int y, int b) : Port(br, st, b){
    nickname = new char[strlen(ni) + 1];
    strcpy(nickname, ni);
    year = y;
}

VintagePort::VintagePort(const VintagePort& vp){
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
}

VintagePort& VintagePort::operator=(const VintagePort& vp){
    Port::operator=(vp);
    delete []nickname;
    nickname = new char[strlen(vp.nickname) + 1];
    strcpy(nickname, vp.nickname);
    year = vp.year;
    return *this;
}

void VintagePort::show() const{
    Port::show();
    std::cout<<"별명 : "<<nickname<<std::endl;
    std::cout<<"연식 : "<<year<<std::endl;
}

std::ostream& operator<<(std::ostream& os, const VintagePort& vp){
    operator<<(os, (const Port&)vp);
    os<<vp.nickname<<", "<<vp.year;
    return os;
}