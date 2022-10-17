#include <iostream>
using namespace std;

int main(){
    long sec_l;
    int day, hour, min, sec;
    const int SEC_TO_MIN = 60;
    const int MIN_TO_HOUR = 60;
    const int HOUR_TO_DAY = 24;
    cout<<"초 수를 입력하시오: ";
    cin>>sec_l;
    sec = sec_l % SEC_TO_MIN;
    min = sec_l / SEC_TO_MIN;
    hour = min / MIN_TO_HOUR;
    min %= MIN_TO_HOUR;
    day = hour / HOUR_TO_DAY;
    hour %= HOUR_TO_DAY;
    cout<<sec_l<<"초 = "<<day<<"일, "<<hour<<"시간, "<<min<<"분, "<<sec<<"초"<<endl;
}