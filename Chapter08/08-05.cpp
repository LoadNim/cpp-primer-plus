#include <iostream>
using namespace std;

template <typename T>
T max5(T arr[5]);

int main(){
    int arr_1[5] = {1, 3, 2, 6, 4};
    double arr_2[5] {1.5, 5.7, 3.4, 2.3, 3.2};
    cout<<max5(arr_1)<<endl;
    cout<<max5(arr_2)<<endl;
}

template <typename T>
T max5(T arr[5]){
    T temp = 0;
    for(int i = 0; i < 5; ++i){
        if(temp < arr[i]) temp = arr[i];
    }
    return temp;
}