#include <iostream>
#include <string>
using namespace std;

int main(){
    string name, dessert;
    cout<<"이름을 입력하십시오:"<<endl;
    getline(cin, name);
    cout<<"좋아하는 디저트를 입력하십시오:"<<endl;
    getline(cin, dessert);
    cout<<"맛있는 "<<dessert;
    cout<<" 디저트를 준비하겠습니다. "<<name<<" 님!"<<endl;
}