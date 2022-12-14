#include <iostream>
using namespace std;

void input(int* i, int* score);
void output(const int num, const int* score);
void average(const int num, const int* score);

int main(){
    int i = 0;
    int score[10];
    input(&i, score);
    output(i, score);
    average(i, score);
}

void input(int* i, int* score){
    unsigned int temp;
    cout<<*i+1<<"홀 스코어 입력 (종료 : 0): ";
    while(*i <= 9 && cin>>temp && temp){
        score[(*i)++] = temp;
        if(*i != 10){
            cout<<*i+1<<"홀 스코어 입력 (종료 : 0): ";
        }
    }
}

void output(const int num, const int* score){
    cout<<"각 홀별 스코어"<<endl;
    for(int i = 0; i < num; ++i){
        cout<<score[i]<<"   ";
    }
    cout<<endl;
}

void average(const int num, const int* score){
    double temp = 0;
    for(int i = 0; i < num; ++i){
        temp+= score[i];
    }
    cout<<"평균 스코어 : "<<temp/num<<endl;
}