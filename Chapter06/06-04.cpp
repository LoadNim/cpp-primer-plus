#include <iostream>
using namespace std;
const int strsize = 20;

struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main(){
    char sel;
    bop arr[5] = {
        {"Wimp Macho", "Junior Programmer", "ARKNIGHTS", 0},
        {"Raki Rhodes", "Junior Programmer", "BLUEARCHIVE", 1},
        {"Celia Laiter", "Junior Programmer", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "GENSHINIMPACT", 1},
        {"Pat Hand", "Project Manager", "LOOPY", 2}
    };

    cout<<"Benevolent Order of Programmers"<<endl;
    cout<<"a. 실명으로 열람             b. 직함으로 열람"<<endl;
    cout<<"c. BOP 아이디로 열람         d. 회원이 지정한 것으로 열람"<<endl;
    cout<<"q. 종료"<<endl;
    cout<<"원하는 것을 선택하십시오: ";
    cin>>sel;
    while (sel != 'q'){
        switch (sel){
            case 'a':
                for(int i = 0; i < 5; ++i){
                    cout<<arr[i].fullname<<endl;
                }
                break;
            case 'b':
                for(int i = 0; i < 5; ++i){
                    cout<<arr[i].title<<endl;
                }
                break;
            case 'c':
                for(int i = 0; i < 5; ++i){
                    cout<<arr[i].bopname<<endl;
                }
                break;
            case 'd':
                for(int i = 0; i < 5; ++i){
                    switch (arr[i].preference){
                        case 0: cout<<arr[i].fullname<<endl;
                                break;
                        case 1: cout<<arr[i].title<<endl;
                                break;
                        case 2: cout<<arr[i].bopname<<endl;
                                break;
                    }
                }
                break;
            default: while (!(sel == 'a' || sel == 'b' || sel == 'c' || sel == 'd')){
                cout<<"원하는 것을 선택하십시오: ";
                cin>>sel;
            }
            continue;
        } 
        cout<<"원하는 것을 선택하십시오: ";
        cin>>sel;
    }
    cout<<"프로그램을 종료합니다."<<endl;
}