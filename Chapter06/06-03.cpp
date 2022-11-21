#include <iostream>
using namespace std;

int main(){
    char sel;
    cout<<"다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)"<<endl;
    cout<<"c) camera    p) pianist"<<endl;
    cout<<"t) tree      g) game"<<endl;
    cin>>sel;
    while (sel != 'q'){
        switch (sel){
            case 'c':
                cout<<"카메라는 스마트폰에 의해 점점 밀려가고 있습니다."<<endl;
                break;
            case 'p':
                cout<<"우리나라의 세계적으로 유명한 피아니스트로는 조성진이 있습니다."<<endl;
                break;
            case 't':
                cout<<"단풍나무는 잎이 별처럼 생겼습니다."<<endl;
                break;
            case 'g':
                cout<<"세계 최고의 게임 명일방주 지금 즉시 플레이 합시다."<<endl;
                break;
            default:
                while (!(sel == 'c' || sel == 'p' || sel == 't' || sel =='g')){
                    cin.clear();
                    cin.get();
                    cout<<"c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): ";
                    cin>>sel;
                    if(sel == 'q') break;
                }
                continue;
        }
            cout<<"c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q): ";
            cin>>sel;
    }
    cout<<"프로그램을 종료합니다."<<endl;
}