#include <iostream>
using namespace std;

 int main(){
    int input;
    cout<<"출력할 행 수를 입력하십시오: ";
    cin>>input;
    for(int i = 1; i <= input; ++i){
        for(int r = 1; r <= input - i; ++r) cout<<".";
        for(int x = 1; x <= i; ++x) cout<<"*";
        cout<<endl;
    }
}