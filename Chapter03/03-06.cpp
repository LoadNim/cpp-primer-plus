#include <iostream>
using namespace std;

int main(){
    double mile, gal;
    cout<<"주행 거리를 입력하시오(단위: 마일): ";
    cin>>mile;
    cout<<"소비한 휘발유의 양을 입력하시오(단위: 갤런): ";
    cin>>gal;
    cout<<"갤런당 "<<mile/gal<<"마일을 달렸습니다."<<endl;    
}