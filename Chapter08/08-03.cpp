#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void change(string& str);

int main(){
    string str;
    cout<<"문자열을 입력하시오 (끝내려면 q) : ";
    while (getline(cin, str) && str != "q"){
        change(str);
        cout<<str<<endl;
        cout<<"다음 문자열을 입력하시오 (끝내려면 q) : ";
    }
    cout<<"끝."<<endl;
}

void change(string &str){
    for(int i = 0; str[i] != 0; ++i){
        str[i] = toupper(str[i]);
    }
}