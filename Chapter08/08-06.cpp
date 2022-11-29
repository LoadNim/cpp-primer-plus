#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T* arr, int n);

template <> const char* maxn(const char* str[], int n);

int main(){
    int arr_1[6] = {1, 5, 3, 2, 6, 4};
    double arr_2[4] = {1.5, 5.7, 3.2, 3.4};
    const char* arr_3[5] = {"texas", "exusiai", "lappland", "skadi", "specter"};

    cout<<maxn(arr_1, 6)<<endl;
    cout<<maxn(arr_2, 4)<<endl;
    cout<<maxn(arr_3, 5)<<endl;
}

template <typename T>
T maxn(T* arr, int n){
    T temp = 0;
    for(int i = 0; i < n; ++i){
        if(temp < arr[i]) temp =  arr[i];
    }
    return temp;
}

template <>
const char* maxn(const char* str[], int n){
    int temp_size = 0;
    char* temp;
    for(int i = 0; i < n; ++i){
        if(temp_size < strlen(str[i])){
            temp_size = strlen(str[i]);
            strcpy(temp, str[i]);
        }
    }
    return temp;
}