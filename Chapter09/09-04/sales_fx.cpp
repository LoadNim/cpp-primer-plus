#include <iostream>
#include <cfloat>
#include "sales.h"

namespace SALES{
    void setSales(Sales& s, const double ar[], int n){
        double max = 0, min = DBL_MAX;
        if(n < QUARTERS){
            for(int i = 0; i < n; ++i){
                s.sales[i] = ar[i];
                if(max < ar[i]) max = ar[i];
                if(min > ar[i]) min = ar[i];
                s.average += ar[i] / n;
            }
        }
        else{
            for(int i = 0; i < QUARTERS; ++i){
                s.sales[i] = ar[i];
                if(max < ar[i]) max = ar[i];
                if(min > ar[i]) min = ar[i];
                s.average += ar[i] / QUARTERS;
            }
        }
        s.max = max;
        s.min = min;
    }

    void setSales(Sales& s){
        using std::cout;
        using std::cin;
        double max = 0, min = DBL_MAX;
        for(int i = 0; i < QUARTERS; ++i){
            cout<<i+1<<"분기 판매액을 입력하세요 : ";
            cin>>s.sales[i];
            if(max < s.sales[i]) max = s.sales[i];
            if(min > s.sales[i]) min = s.sales[i];
            s.average += s.sales[i] / QUARTERS;
        }
        s.max = max;
        s.min = min;
    }

    void showSales(const Sales& s){
        using std::cout;
        using std::endl;
        for(int i = 0; i < QUARTERS; ++i){
            cout<<i+1<<"분기 판매액 : "<<s.sales[i]<<endl;
        }
        cout<<"평균 판매액 : "<<s.average<<endl;
        cout<<"최대 판매액 : "<<s.max<<endl;
        cout<<"최소 판매액 : "<<s.min<<endl;
    }
}