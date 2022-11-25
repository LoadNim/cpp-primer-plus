#include <iostream>
using namespace std;

double harmonic(double a, double b);

int main(){
    double a, b;
    cout<<"두 수 입력: ";
    while ((cin>>a && cin>>b) && (a && b)){
        cout<<a<<"와 "<<b<<"의 조화평균은 "<<harmonic(a, b)<<endl;
        cout<<"두 수 입력: ";
    }
}

double harmonic(double a, double b){
    return 2.0 * a * b / (a + b);
}