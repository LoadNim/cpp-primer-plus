#include <iostream>
#include <array>
using namespace std;

int main(){
    array<long double, 101>arr;
    arr[0] = 1, arr[1] = 1;
    for(int i = 2; i <= 100; i++){
        arr[i] = arr[i-1] * i;
    }
    cout<<"100!의 값은 "<<arr[100]<<"입니다."<<endl;
}