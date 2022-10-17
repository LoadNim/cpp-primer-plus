#include <iostream>
using namespace std;

int main(){
    double litre_per_100km;
    double gal;
    const double MILE = 62.14;
    const double LITRE_TO_GAL = 3.875;
    cout<<"100km당 리터 수를 입력하시오: ";
    cin>>litre_per_100km;
    gal = litre_per_100km / LITRE_TO_GAL;
    cout<<"갤런당 "<<MILE/gal<<"마일을 주행했습니다."<<endl;
}