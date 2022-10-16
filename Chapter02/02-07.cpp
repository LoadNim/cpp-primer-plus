#include <iostream>
using namespace std;

void show_time(int, int);

int main(){
    int hour, min;
    cout<<"시간 값을 입력하시오: ";
    cin>>hour;
    cout<<"분 값을 입력하시오: ";
    cin>>min;
    show_time(hour, min);
}

void show_time(int hour, int min){
    cout<<"시각: "<<hour<<':'<<min<<endl;
}