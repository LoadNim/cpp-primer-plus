#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

void trans(string& input);
bool palindrome(string& input);

int main(){
    string input;
    cout<<"문장을 입력하십시오 : ";
    getline(cin, input);
    trans(input);
    cout<<"after trans : "<<input<<endl;
    if(palindrome(input)) cout<<"회문입니다."<<endl;
    else cout<<"회문이 아닙니다."<<endl;
}

void trans(string& input){
    for(int i = 0; i < input.size(); ++i){
        if(!isalpha(input[i])) input[i] = ' ';
        else if(isupper(input[i])) input[i] = tolower(input[i]);
    }
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
}

bool palindrome(string& input){
    string temp(input);
    copy(input.rbegin(), input.rend(), temp.begin());
    if(input == temp) return true;
    else return false;
}