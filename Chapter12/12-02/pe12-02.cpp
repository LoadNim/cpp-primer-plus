#include <iostream>
using namespace std;
#include "string2.h"

int main(){
    String s1(" and I am a C++ student.");
    String s2 = "영문 이름을 입력하십시오: ";
    String s3;
    cout<<s2;
    cin>>s3;
    s2 = "My name is " + s3;
    cout<<s2<<".\n";
    s2 = s2 + s1;
    s2.stringup();
    cout<<"다음 문자열에는\n"<<s2<<"\n문자 'A'가 "
        <<s2.has('A')<<"개 들어 있습니다.\n";
    s1 = "red";

    String rgb[3] = {String(s1), String("green"), String("blue")};
    cout<<"빛의 삼원색의 이름을 하나만 입력하십시오: ";
    String ans;
    bool succes = false;
    
    while (cin>>ans){
        ans.stringlow();
        for(int i = 0; i < 3; ++i){
            if(ans == rgb[i]){
                cout<<"맞았습니다!\n";
                succes = true;
                break;
            }
        }
        if(succes) break;
        else cout<<"다시 입력하십시오: ";
    }
    cout<<"프로그램을 종료합니다.\n";
}