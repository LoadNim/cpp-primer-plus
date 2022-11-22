#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string input;
    int consonant = 0, vowels = 0, etc = 0;
    cout<<"단어들을 입력하시오 (끝내려면 q):"<<endl;
    cin>>input;
    while (input != "q"){
        if(isalpha(input[0])){
            if(input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u')
                ++vowels;
            else ++consonant;
        }
        else ++etc;
        cin>>input;
    }
    cout<<"모음으로 시작하는 단어 수: "<<vowels<<endl;
    cout<<"자음으로 시작하는 단어 수: "<<consonant<<endl;
    cout<<"기타: "<<etc<<endl;
}