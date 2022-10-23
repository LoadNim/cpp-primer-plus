#include <iostream>
#include <array>
using namespace std;

int main(){
    array<double, 3>record;
    cout<<"첫 번째 40m 달리기 기록을 입력하시오 : ";
    cin>>record[0];
    cout<<"두 번째 40m 달리기 기록을 입력하시오 : ";
    cin>>record[1];
    cout<<"세 번째 40m 달리기 기록을 입력하시오 : ";
    cin>>record[2];

    cout<<"첫 번째 기록 : "<<record[0]<<"초"<<endl;
    cout<<"두 번째 기록 : "<<record[1]<<"초"<<endl;
    cout<<"세 번째 기록 : "<<record[2]<<"초"<<endl;
    cout<<"평균 : "<<(record[0] + record[1] + record[2]) / 3<<endl;
}