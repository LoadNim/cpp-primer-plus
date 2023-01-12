#include <iostream>
#include <cstring>
#include "QueueTp.h"
#include "workermi.h"

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    int sel, ct = 0;
    Queue<Worker*>wk_list;
    Worker* head = nullptr;
    Worker* temp = nullptr;

    for(;;){
        cout<<"1. 직원 입력, 2. 직원 삭제, 3. 종료\n";
        (cin>>sel).get();
        switch(sel){
            case 1:
                char choice;
                cout<<"직종을 입력하십시오: w: 웨이터, s: 가수, t: 가수 겸 웨이터\n";
                cin>>choice;
                while(strchr("wst", choice) == NULL){
                    cout<<"w, s, t 중에서 하나를 선택하십시오: ";
                    cin>>choice;
                }

                switch(choice){
                    case 'w':
                        if(temp != nullptr) delete temp;
                        temp = new Waiter;
                        wk_list.push(temp);
                        break;
                    
                    case 's':
                        if(temp != nullptr) delete temp;
                        temp = new Singer;
                        wk_list.push(temp);
                        break;
                    
                    case 't':
                        if(temp != nullptr) delete temp;
                        temp = new SingingWaiter;
                        wk_list.push(temp);
                        break;
                }
                break;
            
            case 2:
                if(!wk_list.empty()){
                    if(head == nullptr) head = wk_list.set_head();
                    head->Show();
                    cout<<"의 데이터를 삭제합니다.\n";
                    head = wk_list.pop();
                }
                else cout<<"큐가 비어있습니다!\n";
                break;

            case 3:
                cout<<"프로그램을 종료합니다.\n";
                exit(1);
            
            default: cout<<"잘못된 값이 입력되었습니다.\n";
        }
    }
}