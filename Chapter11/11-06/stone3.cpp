#include <iostream>
#include <cfloat>
#include "stonewt3.h"

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    int count = 0;
    stonewt standard(11, 0);
    stonewt max;
    stonewt min(DBL_MAX);
    stonewt arr[6] = {stonewt(15, 57), stonewt(10, 7), stonewt(5, 7)};

    for(int i = 3; i < 6; ++i){
        int st_temp;
        double lbs_temp;
        cout<<"스톤 값(정수)를 입력하세요 : ";
        cin>>st_temp;
        cout<<"파운드 값(실수)를 입력하세요 : ";
        cin>>lbs_temp;
        arr[i] = stonewt(st_temp, lbs_temp);
    }

    for(int i = 0; i < 6; ++i){
        if(arr[i] >= standard) ++count;
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    cout<<"최댓값 : ";
    max.show_lbs();
    cout<<"최소값 : ";
    min.show_lbs();
    cout<<"11스톤 이상인 객체는 "<<count<<"개입니다."<<endl;
}