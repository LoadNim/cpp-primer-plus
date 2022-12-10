#include <iostream>
#include <cfloat>
#include "namesp.h"

Sales::Sales(){
    using std::cout;
    using std::cin;
    double max = 0, min = DBL_MAX;
    for(int i = 0; i < QUARTERS; ++i){
        cout<<i+1<<"분기 판매액을 입력하세요 : ";
        cin>>sales[i];
        if(max < sales[i]) max = sales[i];
        if(min > sales[i]) min = sales[i];
        average +=  sales[i] / QUARTERS;
    }
    this->max = max;
    this->min = min;
}

Sales::Sales(const double ar[], int n){
    double max = 0, min = DBL_MAX;
    if(n < QUARTERS){
        for(int i = 0; i < n; ++i){
            sales[i] = ar[i];
            if(max < ar[i]) max = ar[i];
            if(min > ar[i]) min = ar[i];
            average += ar[i] / n;
        }
    }
    else{
        for(int i = 0; i < QUARTERS; ++i){
            sales[i] = ar[i];
            if(max < ar[i]) max = ar[i];
            if(min > ar[i]) min = ar[i];
            average += ar[i] / QUARTERS;
        }
    }
    this->max = max;
    this->min = min;
}

void Sales::showSales() const{
    using std::cout;
    using std::endl;
    for(int i = 0; i < QUARTERS; ++i) cout<<i+1<<"분기 판매액 : "<<sales[i]<<endl;
    cout<<"평균 판매액 : "<<average<<endl;
    cout<<"최대 판매액 : "<<max<<endl;
    cout<<"최소 판매액 : "<<min<<endl;
}