#include <iostream>
#include <string>

void strcount(const std::string str);

int main(){
    using namespace std;
    string input;

    cout<<"영문으로 한 행을 입력하십시오: ";
    getline(cin, input);
    while (input != ""){
        strcount(input);
        cout<<"다음 행을 입력하십시오(끝내려면 빈 행을 입력) : ";
        getline(cin, input);
    }
    cout<<"프로그램을 종료합니다."<<endl;
}

void strcount(const std::string str){
    using namespace std;
    static int total = 0;
    int count = 0;

    cout<<"\""<<str<<"\"에는";
    count = str.length();
    total += count;
    cout<<count<<"개의 문자가 있습니다."<<endl;
    cout<<"지금가지 총 "<<total<<"개의 문자를 입력하셨습니다."<<endl;
}