#include <iostream>
using namespace std;

void c_to_f(int);

int main(){
    int celsius;
    cout<<"섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
    cin>>celsius;
    c_to_f(celsius);
}

void c_to_f(int celsius){
    cout<<"섭씨 "<<celsius<<"도는 화씨로 "<<celsius*1.8+32.0<<"도입니다."<<endl;
}