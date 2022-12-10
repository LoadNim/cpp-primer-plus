#include <iostream>
#include <cstring>
#include "stack.h"

Stack::Stack(){
    cus_num = 0;
    revenue = 0;
}

void Stack::add_customer(){
    using std::cout;
    using std::cin;

    cout<<"고객의 이름을 입력해주세요 : ";
    cin.getline(cus_arr[cus_num].fullname, 35);
    cout<<"고객이 지출한 금액을 입력해주세요 : ";
    (cin>>cus_arr[cus_num].payment).get();
    ++cus_num;
}

void Stack::del_customer(){
    using std::cout;
    using std::endl;

    if(!cus_num) cout<<"저장된 고객이 없습니다!"<<endl;
    else{
        revenue += cus_arr[--cus_num].payment;
        cout<<cus_arr[cus_num].fullname<<"님의 "<<cus_arr[cus_num].payment<<"원이 총 수입에 추가됩니다."<<endl;
        cout<<"총 수익은 "<<revenue<<"원입니다."<<endl;
    }
}