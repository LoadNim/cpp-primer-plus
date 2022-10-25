#include <iostream>
using namespace std;

int main(){
    int sum[3]{0,}, sales[3][12];
    const char* month[12]{"1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};
    for(int i = 0; i < 3; ++i){
        for(int r = 0; r < 12; ++r){
            cout<<i+1<<"년차 "<<month[r]<<" 판매량 입력 : ";
            cin>>sales[i][r];
            sum[i] += sales[i][r];
        }
        cout<<i+1<<"년차 판매량 : "<<sum[i]<<endl;
    }
    int temp = sum[0];
    for(int i = 1; i < 3; ++i){
        temp += sum[i];
        cout<<i+1<<"년차 누적 판매량 : "<<temp<<endl;
    }
}