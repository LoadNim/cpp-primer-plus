#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char first_name[20];
    char last_name[20];
    cout<<"퍼스트 네임(이름)을 입력하시오: ";
    cin.getline(first_name, 19);
    cout<<"라스트 네임(성)을 입력하시오: ";
    cin.getline(last_name, 19);
    char* str = new char[strlen(first_name) + strlen(last_name+3)];
    strcpy(str, last_name);
    strcat(str, ", ");
    strcat(str, first_name);
    cout<<"하나의 문자열로 만들면: "<<str<<endl;
}