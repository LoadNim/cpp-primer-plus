#include <iostream>
using namespace std;

int main(){
    int i = 0, count = 0;
    double donate[10];
    double average = 0;
    while (i < 10 && cin>>donate[i]){
        average += donate[i++];
    }
    average/=i;
    for(i; i >= 0; --i){
        if(donate[i] > average) count++;
    }
    cout<<"기부금 평균은 : "<<average<<"이며, 평균 보다 큰 기부금은 총 "<<count<<"개 있습니다."<<endl;
}