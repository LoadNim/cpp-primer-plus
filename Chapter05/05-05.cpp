#include <iostream>
using namespace std;

int main(){
    int sum = 0, sales[12];
    const char* month[12]{"1월", "2월", "3월", "4월", "5월", "6월", "7월", "8월", "9월", "10월", "11월", "12월"};
    for(int i = 0; i < 12; ++i){
        cout<<month[i]<<" 판매량 입력 : ";
        cin>>sales[i];
        sum += sales[i];
    }
    cout<<"연간 판매량은 "<<sum<<"권 입니다.";
}