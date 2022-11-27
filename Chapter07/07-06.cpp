#include <iostream>
using namespace std;

void Fill_array(double* arr, int* num);
void Show_array(const double* arr, const int num);
void Reverse_array(double *arr, int num);

int main(){
    int num = 10;
    double arr[10];
    Fill_array(arr, &num);
    Show_array(arr, num);
    Reverse_array(arr, num - 1);
    Show_array(arr, num);
    Reverse_array(arr + 1, num - 3);
    Show_array(arr, num);
}

void Fill_array(double *arr, int* num){
    int i = 0;
    double temp;
    for(i; i < *num; ++i){
        cout<<i<<"번째 원소 입력 (숫자 이외의 값을 입력하면 종료됩니다): ";
        if(cin>>temp) arr[i] = temp;
        else break;
    }
    *num = i;
}

void Show_array(const double* arr, const int num){
    cout<<"배열 출력"<<endl;
    for(int i = 0; i < num; ++i){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void Reverse_array(double* arr, int num){
    double temp;
    while (arr < arr+num){
        temp = *arr;
        *arr = *(arr + num);
        *(arr + num) = temp;
        ++arr, num -= 2;
    }
}