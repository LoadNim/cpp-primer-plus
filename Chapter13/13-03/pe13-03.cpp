#include <iostream>
#include "dmaabc.h"

int main(){
    using std::cin;
    using std::cout;
    using std::endl;

    baseDMA a("Arknights", 1);
    baseDMA b("Genshin Impact", 2);
    absDMA arr[4];

    for(int i = 0; i < 4; ++i){
        int sel;
        char ch_temp_a[50];
        char ch_temp_b[50];
        int in_temp;
        cout<<i<<"번째 객체를 생성합니다.\n";
        cout<<"1. baseDMA, 2. lacksDMA, 3. hasDMA"<<endl;
        (cin>>sel).get();
        switch(sel){
            case 1:
                cout<<"label을 입력하십시오 : ";
                cin.getline(ch_temp_a, 50);
                cout<<"rating을 입력하십시오 : ";
                cin>>in_temp;
                arr[i] = baseDMA(ch_temp_a, in_temp);
                break;
            case 2:
                cout<<"color를 입력하십시오 : ";
                cin.getline(ch_temp_a, 40);
                cout<<"label을 입력하십시오 : ";
                cin.getline(ch_temp_b, 50);
                cout<<"rating을 입력하십시오 : ";
                cin>>in_temp;
                arr[i] = lacksDMA(ch_temp_a, ch_temp_b, in_temp);
                break;
            case 3:
                cout<<"style을 입력하십시오 : ";
                cin.getline(ch_temp_a, 50);
                cout<<"label을 입력하십시오 : ";
                cin.getline(ch_temp_b, 50);
                cout<<"rating을 입력하십시오 : ";
                cin>>in_temp;
                arr[i] = hasDMA(ch_temp_a, ch_temp_b, in_temp);
                break;
            default:
                cout<<"잘못된 입력입니다!\n";
                --i;
        }
    }

    cout<<"\nView 메서드를 활용한 출력\n";
    for(int i = 0; i < 4; ++i) arr[i].View();

    cout<<"\noperator<< 함수를 활용한 출력\n";
    for(int i = 0; i < 4; ++i) cout<<arr[i];

    cout<<"\n대입 연산자 test\n";
    b = a;
    cout<<b;
}