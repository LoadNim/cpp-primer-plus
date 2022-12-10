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

void acc::show_acc(acc& ac) const{
    using std::cout;
    using std::endl;

    cout<<"이름 : "<<ac.name<<endl;
    cout<<"계좌번호 : "<<ac.num<<endl;
    cout<<"잔액 : "<<ac.val<<endl;
}

void acc::deposit(acc& ac){
    using std::cout;
    using std::cin;
    using std::endl;

    long long temp;
    cout<<"입금액을 입력하세요 : ";
    cin>>temp;
    ac.val += temp;
    cout<<"입금 완료 되었습니다."<<endl;
}

void acc::withdraw(acc& ac){
    using std::cout;
    using std::cin;
    using std::endl;

    long long temp;
    cout<<"출금액을 입력하세요 : ";
    cin>>temp;
    if(ac.val < temp) cout<<"잔액이 모자랍니다!"<<endl;
    else{
        ac.val -= temp;
        cout<<"출금 완료 되었습니다."<<endl;
    }
}