#include <iostream>
#include <string>
using namespace std;

int main(){
    string first_name, last_name, str;
    cout<<"퍼스트 네임(이름)을 입력하시오: ";
    getline(cin, first_name);
    cout<<"라스트 네임(성)을 입력하시오: ";
    getline(cin, last_name);
    str = last_name + ", " + first_name;
    cout<<"하나의 문자열로 만들면: "<<str<<endl;
}