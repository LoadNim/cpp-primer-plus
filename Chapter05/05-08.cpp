#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int count = 0;
    char input[50];
    cout<<"영어 단어들을 입력하십시오(끝내려면 done을 입력) : "<<endl;
    (cin>>input).get();
    while (strcmp(input, "done")){
        count++;
        (cin>>input).get();
    }
    cout<<"총 "<<count<<" 단어가 입력되었습니다."<<endl;
}