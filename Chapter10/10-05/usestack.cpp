#include <iostream>
#include "stack.h"

int main(){
    using std::cout;
    using std::endl;
    using std::cin;

    Stack st;
    int sel;
    cout<<"1. 고객 추가, 2. 고객 삭제, 3. 종료"<<endl;
    (cin>>sel).get();
    for(;;){
        switch (sel){
            case 1: st.add_customer();
                    break;
            case 2: st.del_customer();
                    break;
            case 3: cout<<"프로그램을 종료합니다."<<endl;
                    exit(1);
            default: cout<<"잘못된 입력입니다!"<<endl;
        }
        cout<<"1. 고객 추가, 2. 고객 삭제, 3. 종료"<<endl;
        (cin>>sel).get();
    }
}