#include <iostream>

int main(){
    using std::cout;
    using std::cin;
    
    unsigned int ct = 0;
    char ch;

    cout<<"문자를 입력하세요\n";
    cin.get(ch);
    while (ch != '$'){
        ++ct;
        cin.get(ch);
    }
    
    cout<<"$가 나오기까지 "<<ct<<"개의 문자가 입력되었습니다.\n";
    cout<<"입력 스트림에 남아있는 문자 : "<<ch<<std::endl;
}