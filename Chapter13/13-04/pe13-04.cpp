#include <iostream>
#include "port.h"

int main(){
    using std::cout;
    using std::endl;
    Port* arr[2];

    arr[0] = new Port("G7", "Cabernet Sauvignon", 10);
    arr[1] = new VintagePort("TH", "Thomas Hardy", "Vintage", 2017, 10);
    
    cout<<"show() 메서드를 활용한 출력\n";
    arr[0]->show();
    arr[1]->show();

    cout<<"\n증감 연산 test\n";
    *arr[0] -= 3;
    *arr[1] += 3;
    arr[0]->show();
    arr[1]->show();

    cout<<"\n대입 연산 test\n";
    arr[0] = arr[1];
    arr[0]->show();

    delete arr[0];
    delete arr[1];
}