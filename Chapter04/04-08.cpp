#include <iostream>
using namespace std;

struct pizza{
    char brand_name[20];
    double diameter;
    double weight;
};

int main(){
    pizza* p1 = new pizza;
    cout<<"회사 이름 입력: ";
    cin.getline(p1->brand_name, 19);
    cout<<"피자 지름 입력: ";
    cin>>p1->diameter;
    cout<<"피자 중량 입력: ";
    cin>>p1->weight;
    cout<<"브랜드 : "<<p1->brand_name<<endl;
    cout<<"지름 : "<<p1->diameter<<"cm"<<endl;
    cout<<"중량 : "<<p1->weight<<"g"<<endl;
}