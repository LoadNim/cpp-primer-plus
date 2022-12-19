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
    Queue line_A(qs);
    Queue line_B(qs);

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
    double avg = 0;
    
    Item temp;
    long turnaways;
    long customers;
    long served_A, served_B;
    long sum_line_A, sum_line_B;
    int wait_time_A, wait_time_B;
    long line_wait_A, line_wait_B;
    


    for(perhour = 1; avg < 1; ++perhour){
        min_per_cust = MIN_PER_HR / perhour;
        turnaways = 0;
        customers = 0;
        served_A = served_B = 0;
        sum_line_A = sum_line_B = 0;
        wait_time_A = wait_time_B = 0;
        line_wait_A = line_wait_B = 0;
        
        for(int cycle = 0; cycle < cyclelimit; ++cycle){
            if(newcustomer(min_per_cust)){
                if(line_A.isfull() && line_B.isfull()) ++turnaways;
                else{
                    ++customers;
                    temp.set(cycle);
                    if(line_A.queuecount() > line_B.queuecount()) line_B.enqueue(temp);
                    else line_A.enqueue(temp);
                }
            }
            if(wait_time_A <= 0 && !line_A.isempty()){
                line_A.dequeue(temp);
                wait_time_A = temp.ptime();
                line_wait_A += cycle - temp.when();
                ++served_A;
            }
            if(wait_time_B <= 0 && !line_B.isempty()){
                line_B.dequeue(temp);
                wait_time_B = temp.ptime();
                line_wait_B += cycle - temp.when();
                ++served_B;
            }
            if(wait_time_A > 0) --wait_time_A;
            if(wait_time_B > 0) --wait_time_B;
            sum_line_A += line_A.queuecount();
            sum_line_B += line_B.queuecount();
        }
        avg = double(((line_wait_A + line_wait_B) / 2) / (served_A + served_B));
    }
    cout<<(int)perhour - 1<<"명이 넘으면 1분을 초과합니다."<<endl;
}

bool newcustomer(double x){
    return (std::rand() * x / RAND_MAX < 1);
}