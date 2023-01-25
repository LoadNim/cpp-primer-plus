#include <iostream>
#include <algorithm>
using namespace std;

int reduce(long ar[], int n);

int main(){
    long arr[10] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 4};
    cout<<"reduce() 실행 후 원소 수 : "<<reduce(arr, 10)<<endl;
}

int reduce(long ar[], int n){
    sort(ar, ar+n);
    long* temp = unique(ar, ar + n);
    return temp - ar;
}