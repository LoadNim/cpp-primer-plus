#include <iostream>
#include <cstring>
#include "dmaabc.h"

absDMA::absDMA(const char* l, int r){
    label = new char[strlen(l) + 1];
    strcpy(label, l);
    rating = r;
}

absDMA::absDMA(const absDMA& rs){
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
}

absDMA::~absDMA(){
    delete []label;
}

absDMA& absDMA::operator=(const absDMA& rs){
    delete []label;
    label = new char[strlen(rs.label) + 1];
    strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

void absDMA::View() const{
    std::cout<<"label : "<<label<<std::endl;
    std::cout<<"rating : "<<rating<<std::endl;
}

std::ostream& operator<<(std::ostream& os, const absDMA& rs){
    os<<"label : "<<rs.label<<std::endl;
    os<<"rating : "<<rs.rating<<std::endl;
    return os;
}

baseDMA::baseDMA(const char* l, int r) : absDMA(l, r){}

baseDMA::baseDMA(const baseDMA& rs) : absDMA(rs){}

baseDMA& baseDMA::operator=(const baseDMA& rs){
    absDMA::operator=(rs);
    return *this;
}

void baseDMA::View() const{
    absDMA::View();
}

std::ostream& operator<<(std::ostream& os, const baseDMA& rs){
    operator<<(std::cout, absDMA(rs));
    return os;
}

lacksDMA::lacksDMA(const char* c, const char* l, int r) : absDMA(l, r){
    strcpy(color, c);
}

lacksDMA::lacksDMA(const char* c, const lacksDMA& rs) : absDMA(rs){
    strcpy(color, rs.color);
}

lacksDMA& lacksDMA::operator=(const lacksDMA& rs){
    strcpy(color, rs.color);
    return *this;
}

void lacksDMA::View() const{
    absDMA::View();
    std::cout<<"color : "<<color<<std::endl;
}

std::ostream& operator<<(std::ostream& os, const lacksDMA& rs){
    operator<<(std::cout, absDMA(rs));
    os<<"color : "<<rs.color<<std::endl;
    return os;
}

hasDMA::hasDMA(const char* s, const char* l, int r) : absDMA(l, r){
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const char*s, const hasDMA& rs) : absDMA(rs){
    style = new char[strlen(s) + 1];
    strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA& rs) : absDMA(rs){
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
}

hasDMA::~hasDMA(){
    delete []style;
}

hasDMA& hasDMA::operator=(const hasDMA& rs){
    absDMA::operator=(rs);
    delete []style;
    style = new char[strlen(rs.style) + 1];
    strcpy(style, rs.style);
    return *this;
}

void hasDMA::View() const{
    absDMA::View();
    std::cout<<"style : "<<style<<std::endl;
}

std::ostream& operator<<(std::ostream& os, const hasDMA& rs){
    operator<<(std::cout, absDMA(rs));
    os<<"style : "<<rs.style<<std::endl;
    return os;
}