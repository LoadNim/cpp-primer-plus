#include <iostream>
#include <string>
using namespace std;

int main(){
    int count;
    string str;
    cout<<"영어 단어들을 입력하십시오(끝내려면 done을 입력) : "<<endl;
    (cin>>str).get();
    while (str != "done"){
        count++;
        (cin>>str).get();
    }
    cout<<"총 "<<count<<" 단어가 입력되었습니다."<<endl;
}