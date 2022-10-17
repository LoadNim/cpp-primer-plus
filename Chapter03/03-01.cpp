#include <iostream>
using namespace std;

int main(){
    int cm;
    const int M = 100;
    cout<<"키를 cm 단위로 입력해주세요 : ___\b\b\b";
    cin>>cm;
    cout<<"키"<<cm<<"은, "<<cm/M<<"미터 "<<cm%M<<"센티미터 입니다."<<endl;
}