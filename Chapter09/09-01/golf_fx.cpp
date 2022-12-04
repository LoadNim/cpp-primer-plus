#include <iostream>
#include <cstring>
#include "golf.h"
using namespace std;

void setgolf(golf& g, const char* name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf& g){
    cout<<"이름을 입력하세요 : ";
    cin.getline(g.fullname, Len);
    if(!strcmp(g.fullname, "")) return 0;
    cout<<"핸디캡을 입력하세요 : ";
    cin>>g.handicap;
    return 1;
}

void handicap(golf& g, int hc){
    g.handicap = hc;
}

void showgolf(const golf& g){
    cout<<"이름 : "<<g.fullname<<endl;
    cout<<"핸디캡 : "<<g.handicap<<endl;
}
