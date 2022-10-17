#include <iostream>
using namespace std;

int main(){
    double deg, min, sec;
    const int UPSCALE = 60;
    cout<<"위도를 도, 분, 초 단위로 입력하시오:"<<endl;
    cout<<"먼저, 도각을 입력하시오: ";
    cin>>deg;
    cout<<"다음에, 분각을 입력하시오: ";
    cin>>min;
    cout<<"끝으로, 초각을 입력하시오: ";
    cin>>sec;
    cout<<deg<<"도, "<<min<<"분, "<<sec<<"초 = ";
    cout<<deg + (min / UPSCALE) + (sec / UPSCALE / UPSCALE)<<"도"<<endl;
}