#include <iostream>
using namespace std;

int main(){
    int temp, sum = 0;
    cout<<"수 입력 : ";
    cin>>temp;
    while (temp != 0){
        sum += temp;
        cout<<"현재까지 입력된 수의 합 : "<<sum<<endl;
        cout<<"수 입력 : ";
        cin>>temp;
    }
}