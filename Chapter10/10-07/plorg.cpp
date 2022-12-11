#include <iostream>
#include <cstring>
#include "plorg.h"

plorg::plorg(const char* name, int ci){
    strcpy(this->name, name);
    this->ci = ci;
}

void plorg::change_ci(int ci){
    this->ci = ci;
}

void plorg::show_plorg() const{
    using std::cout;
    using std::endl;
    cout<<"이름 : "<<name<<", ci : "<<ci<<endl;
}