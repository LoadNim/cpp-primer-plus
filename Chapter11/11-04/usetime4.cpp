#include <iostream>
#include "time4.h"

int main(){
    using std::cout;
    using std::endl;

    Time a(15, 57);
    Time b(12, 12);
    Time temp;

    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    cout<<"temp = a + b 연산 실행"<<endl;
    temp = a + b;
    cout<<temp<<endl;
    cout<<"temp 초기화"<<endl;
    temp.Reset();
    cout<<endl;

    cout<<"temp = a - b 연산 실행"<<endl;
    temp = a - b;
    cout<<temp<<endl;
    cout<<"temp 초기화"<<endl;
    temp.Reset();
    cout<<endl;

    cout<<"a * 10 연산 실행"<<endl;
    cout<<a*10<<endl<<endl;

    cout<<"10 * b 연산 실행"<<endl;
    cout<<10*b<<endl<<endl;
}