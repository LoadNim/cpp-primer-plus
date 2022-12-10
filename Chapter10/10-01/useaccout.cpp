#include <iostream>
#include "account.h"

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    short sel;
    acc ac1;
    cout<<"메뉴를 선택하세요"<<endl;
    cout<<"1. 계좌확인, 2. 입금, 3. 출금, 4. 종료"<<endl;
    cin>>sel;
    while (sel != 4){
        switch (sel){
        case 1: ac1.show_acc();
                break;
        case 2: ac1.deposit();
                break;
        case 3: ac1.withdraw();
                break;
        case 4: cout<<"프로그램을 종료합니다."<<endl;
                exit(1);
        default:
            cout<<"잘못된 입력입니다."<<endl;
        }
    cout<<"메뉴를 선택하세요"<<endl;
    cout<<"1. 계좌확인, 2. 입금, 3. 출금, 4. 종료"<<endl;
    cin>>sel;
    }
}