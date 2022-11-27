#include <iostream>
using namespace std;

double* Fill_array(double* arr, double* last);
void Show_array(const double* arr, const double* const last);
void Reverse_array(double* const arr, double* const last);

int main(){
    double arr[10];
    double *last = arr + 10;
    last = Fill_array(arr, last);
    Show_array(arr, last);
    Reverse_array(arr, last - 1);
    Show_array(arr, last);
    Reverse_array(arr + 1, last - 2);
    Show_array(arr, last);
}

double* Fill_array(double* arr, double* last){
    int i;
    double temp;
    for(i = 0; i < 10; ++i){
        cout<<i<<"번째 원소 입력 (숫자 이외의 값을 입력하면 종료됩니다): ";
        if(cin>>temp) arr[i] = temp;
        else break;
    }
    return arr + i;
}

void Show_array(const double* arr, const double* const last){
    cout<<"배열 출력"<<endl;
    for(int i = 0; arr + i < last; ++i){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

void Reverse_array(double* const arr, double* const last){
    double temp;
    for(int i = 0; arr + i < last - i; ++i){
        temp = *(arr + i);
        *(arr + i) = *(last - i);
        *(last - i) = temp;
    }
}