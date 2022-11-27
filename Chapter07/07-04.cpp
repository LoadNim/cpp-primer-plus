#include <iostream>
using namespace std;

long double cal_per(const int max, const int num);

int main(){
    int max, num;
    long double result = 1.0;
    for(int i = 1; i <= 2; i++){
        cout<<i<<"회차) 전체 수의 개수와, 뽑을 수의 개수를 입력하시오 : ";
        if((cin>>max>>num) && max >= num) result *= cal_per(max, num);
        else break;
        if(i == 2) cout<<result<<"중에 한 번 당첨 될 확률입니다."<<endl;
    }
    cout<<"프로그램을 종료합니다."<<endl;
}

long double cal_per(const int max, const int num){
    long double temp = 1.0;
    for(int i = 0; i < num; ++i){
        temp *= (max - i) / (num - i);
    }
    return temp;
}