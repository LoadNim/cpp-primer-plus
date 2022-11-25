#include <iostream>
using namespace std;

void input(int* i, int* score);
void output(const int i, const int* score);

int main(){
    int i = 0;
    int score[10];
    input(&i, score);
    output(i, score);
}

void input(int* i, int* score){
    unsigned int temp;
    cout<<*i+1<<"홀 스코어 입력 (종료 : 0): ";
    while(cin>>temp && temp && *i <= 9){
        score[(*i)++] = temp;
        cout<<*i+1<<"홀 스코어 입력 (종료 : 0): ";
    }
}

void output(const int num, const int* score){
    for(int i = 0; i < num; i++){
        cout<<score[i]<<"   ";
    }
    cout<<endl;
}