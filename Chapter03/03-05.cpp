#include <iostream>
using namespace std;

int main(){
    long long global_people, usa_people;
    double percent;
    cout<<"세계 인구수를 입력하시오: ";
    cin>>global_people;
    cout<<"미국의 인구수를 입력하시오: ";
    cin>>usa_people;
    percent = double(usa_people) / double(global_people) * 100;
    cout<<"세계 인구수에서 미국이 차지하는 비중은 ";
    cout<<percent<<"%이다."<<endl;
}