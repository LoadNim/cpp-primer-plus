#include <iostream>
#include <string>
#include "account.h"

acc::acc(){
    using std::cout;
    using std::cin;

    cout<<"이름을 입력하세요 : ";
    getline(cin, name);
    cout<<"계좌번호를 입력하세요 : ";
    getline(cin, num);
    cout<<"잔액을 입력하세요 : ";
    cin>>val;
}

void acc::show_acc() const{
    using std::cout;
    using std::endl;

    cout<<"이름 : "<<this->name<<endl;
    cout<<"계좌번호 : "<<this->num<<endl;
    cout<<"잔액 : "<<this->val<<endl;
}

void acc::deposit(){
    using std::cout;
    using std::cin;
    using std::endl;

    long long temp;
    cout<<"입금액을 입력하세요 : ";
    cin>>temp;
    val += temp;
    cout<<"입금 완료 되었습니다."<<endl;
}

void acc::withdraw(){
    using std::cout;
    using std::cin;
    using std::endl;

    long long temp;
    cout<<"출금액을 입력하세요 : ";
    cin>>temp;
    if(val < temp) cout<<"잔액이 모자랍니다!"<<endl;
    else{
        val -= temp;
        cout<<"출금 완료 되었습니다."<<endl;
    }
}