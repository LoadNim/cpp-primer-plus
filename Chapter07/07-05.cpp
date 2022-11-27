#include <iostream>
using namespace std;

long long cal_fac(int num);

int main(){
    unsigned int n;
    cout<<"양의 정수를 입력하시오 (이외의 값을 입력하면 종료합니다): ";
    while (cin>>n){
        cout<<n<<"의 팩토리얼 값은 "<<cal_fac(n)<<"입니다"<<endl;
        cout<<"양의 정수를 입력하시오 (이외의 값을 입력하면 종료합니다): ";
    }
    cout<<"양의 정수 이외의 값을 입력하여 프로그램을 종료합니다."<<endl;
}

long long cal_fac(int num){
    if(num <= 1) return 1;
    return num * cal_fac(num - 1);
}