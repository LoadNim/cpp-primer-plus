#include <iostream>
#include <cstring>
#include "golf.h"

golf::golf(){
    strcpy(fullname, "");
    handicap = 0;
}

golf::golf(const char* name, int hc){
    strcpy(fullname, name);
    handicap = hc;
}

int golf::setgolf(){
    using std::cout;
    using std::cin;
    cout<<"이름을 입력하세요 : ";
    cin.getline(fullname, Len);
    if(!strcmp(fullname, "")) return 0;
    cout<<"핸디캡을 입력하세요 : ";
    (cin>>handicap).get();
    return 1;
}

void golf::set_handicap(int hc){
    handicap = hc;
}

void golf::showgolf() const{
    using std::cout;
    using std::endl;
    cout<<"이름 : "<<fullname<<endl;
    cout<<"핸디캡 : "<<handicap<<endl;
}