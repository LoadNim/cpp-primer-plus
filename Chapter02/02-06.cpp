#include <iostream>
using namespace std;

double trans(double);

int main(){
    double light_year;
    cout<<"광년 수를 입력하고 Enter 키를 누르십시오: ";
    cin>>light_year;
    cout<<light_year<<" 광년은 "<<trans(light_year)<<" 천문 단위입니다."<<endl;
}

double trans(double light_year){
    return light_year * 63240;
}