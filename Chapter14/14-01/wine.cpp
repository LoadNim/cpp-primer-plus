#include <iostream>
#include <valarray>
#include <string>
#include "wine.h"

template<class T1, class T2>
T1 & Pair<T1,T2>::first()
{
    return a;
}
template<class T1, class T2>
T2 & Pair<T1,T2>::second()
{
    return b;
}

std::string& Wine::Label(){return label;}

void Wine::GetBottles(){
    using std::cout;
    using std::cin;

    cout<<year_num<<"년 간의 "<<label<<" 데이터를 입력하시오: \n";
    for(int i = 0; i < year_num; ++i){
        cout<<"년도를 입력하시오: ";
        cin>>p.first()[i];
        cout<<"수량을 입력하시오: ";
        cin>>p.second()[i];
    }
}

void Wine::Show(){
    using std::cout;
    using std::endl;

    cout<<"와인: "<<label<<endl;
    cout<<"\t"<<"년도"<<"\t"<<"수량\n";
    for(int i = 0; i < year_num; ++i){
        cout<<"\t"<<p.first()[i]<<"\t"<<p.second()[i]<<endl;
    }
}