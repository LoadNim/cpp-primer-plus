#include "time4.h"

Time::Time(){
    hours = minutes = 0;
}

Time::Time(int h, int m){
    hours = h;
    minutes = m;
}

void Time::AddMin(int m){
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time::AddHr(int h){
    hours += h;
}

void Time::Reset(int h, int m){
    hours = h;
    minutes = m;
}

Time operator+(const Time& t1, const Time& t2){
    Time temp;
    temp.hours = t1.hours + t2.hours;
    temp.minutes = t1.minutes + t2.minutes;
    temp.hours += temp.minutes / 60;
    temp.minutes %= 60;
    return temp;
}

Time operator-(const Time& t1, const Time& t2){
    Time temp;
    int t1_sum = t1.hours * 60 + t1.minutes;
    int t2_sum = t2.hours * 60 + t2.minutes;
    int temp_sum = t1_sum - t2_sum;
    temp.hours = temp_sum / 60;
    temp.minutes = temp_sum % 60;
    return temp;
}

Time operator*(const Time& t, double n){
    Time temp;
    int t_sum = (t.hours * 60 + t.minutes) * n;
    temp.hours = t_sum / 60;
    temp.minutes = t_sum % 60;
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Time& t){
    os<<t.hours<<"시간, "<<t.minutes<<"분";
    return os;
}