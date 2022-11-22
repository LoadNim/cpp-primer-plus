#include <iostream>
using namespace std;

int main(){
    int tvarp;
    cout<<"소득 입력 (종료를 원한다면 음수를 입력하시오) : ";
    while (cin>>tvarp && tvarp > 0){
        double tax = 0;
        if(tvarp <= 5000){
            cout<<"소득 "<<tvarp<<"트바프에 대한 소득세는 "<<tax<<"트바프입니다."<<endl;
        }
        else if(tvarp <= 15000){
            cout<<"소득 "<<tvarp<<"트바프에 대한 소득세는 ";
            tax = (tvarp - 5000) * 0.1;
            cout<<tax<<"트바프입니다."<<endl;
        }
        else if(tvarp <= 35000){
            cout<<"소득 "<<tvarp<<"트바프에 대한 소득세는 ";
            tax = 1000 + (tvarp - 15000) * 0.15;
            cout<<tax<<"트바프입니다."<<endl;
        }
        else{
            cout<<"소득 "<<tvarp<<"트바프에 대한 소득세는 ";
            tax = 1000 + 3000 + (tvarp - 35000) * 0.2;
            cout<<tax<<"트바프입니다."<<endl;
        }
        cout<<"소득 입력 (종료를 원한다면 음수를 입력하시오) : ";
    }
    cout<<"프로그램을 종료합니다."<<endl;
}