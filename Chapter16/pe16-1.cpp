#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool palindrome(string& input);

int main(){
    string input;
    cout<<"문장을 입력해 주세요 : ";
    getline(cin, input);
    if(palindrome(input)) cout<<"회문입니다."<<endl;
    else cout<<"회문이 아닙니다."<<endl;
}

bool palindrome(string& input){
    string temp(input);
    copy(input.rbegin(), input.rend(), temp.begin());
    if(input == temp) return true;
    else return false;
}