#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include "vect.h"

int main(){
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    unsigned long min = ULONG_MAX, max = 0;
    double average = 0;
    double target;
    double dstep;
    int n;
    cout<<"목표 거리를 입력하십시오(끝내려면 q): ";
    while(cin>>target){
        cout<<"보폭을 입력하십시오: ";
        if(!(cin>>dstep)) break;
        cout<<"시도 횟수를 입력하십시오: ";
        cin>>n;
        for(int i = 0; i < n; ++i){
            while(result.magval() < target){
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                ++steps;
            }
            if(min > steps) min = steps;
            if(max < steps) max = steps;
            average += double(steps / n);
            steps = 0;
            result.reset(0.0, 0.0);
        }
        cout<<n<<"번의 시도동안 술고래의 최고 걸음 수 : "<<max<<endl;
        cout<<n<<"번의 시도동안 술고래의 최저 걸음 수 : "<<min<<endl;
        cout<<n<<"번의 시도동안 술고래의 평균 걸음 수 : "<<average<<endl;
        cout<<"목표 거리를 입력하십시오(끝내려면 q): ";
    }
        cout<<"프로그램을 종료합니다."<<endl;
        cin.clear();
        while(cin.get() != '\n')
            continue;
        return 0;
}