#include <iostream>
using namespace std;

int main(){
    int feet, inch, pound;
    double meter, kilogram;
    const int FEET_TO_INCH = 12;
    const double INCH_TO_METER = 0.0254;
    const double POUND_TO_KILOGRAM = 2.2;
    cout<<"인치를 제외한 피트 단위의 키를 입력하세요 : ";
    cin>>feet;
    cout<<"나머지 인치 단위의 키를 입력하세요 : ";
    cin>>inch;
    cout<<"체중을 파운드 단위로 입력하세요 : ";
    cin>>pound;
    meter = (feet * FEET_TO_INCH + inch) * INCH_TO_METER;
    kilogram = pound / POUND_TO_KILOGRAM;
    cout<<"당신의 BMI지수는 "<<kilogram/(meter*meter)<<"입니다."<<endl;
}