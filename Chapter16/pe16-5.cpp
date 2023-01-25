#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

template<typename T>
int reduce(T* ar, int n);

int main(){
    long arr[10] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 4};
    cout<<"reduce<long>() 실행 후 원소 수 : "<<reduce(arr, 10)<<endl;
}

template<typename T>
int reduce(T* ar, int n){
    sort(ar, ar+n);
    T* temp = unique(ar, ar + n);
    return temp - ar;
}