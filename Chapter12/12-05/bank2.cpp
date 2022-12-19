#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x);

int main(){
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
    std::srand(std::time(0));

    cout<<"사례 연구 : 히서 은행의 ATM\n";
    cout<<"큐의 최대 길이를 입력하십시오: ";
    int qs;
    cin>>qs;
    Queue line(qs);

    int hours;
    for(;;){
        cout<<"시뮬레이션 시간 수를 입력하십시오: ";
        cin>>hours;
        if(hours >= 100) break;
        else cout<<"시뮬레이션 시간은 최소 100시간 이상입니다."<<endl;
    }
    long cyclelimit = MIN_PER_HR * hours;
    double perhour;
    double min_per_cust;
    
    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 1;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    


    for(perhour = 1; line_wait / served < 1; ++perhour){
        min_per_cust = MIN_PER_HR / perhour;
        turnaways = 0;
        customers = 0;
        served = 0;
        sum_line = 0;
        wait_time = 0;
        line_wait = 0;
        
        for(int cycle = 0; cycle < cyclelimit; ++cycle){
            if(newcustomer(min_per_cust)){
                if(line.isfull()) ++turnaways;
                else{
                    ++customers;
                    temp.set(cycle);
                    line.enqueue(temp);
                }
            }
            if(wait_time <= 0 && !line.isempty()){
                line.dequeue(temp);
                wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                ++served;
            }
            if(wait_time > 0) --wait_time;
            sum_line += line.queuecount();
        }
    }
    cout<<(int)perhour - 1<<"명이 넘으면 1분을 초과합니다."<<endl;
}

bool newcustomer(double x){
    return (std::rand() * x / RAND_MAX < 1);
}