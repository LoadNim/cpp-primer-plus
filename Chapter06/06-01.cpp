#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char input;
    cin.get(input);
    while (input != '@'){
        if(islower(input)) cout<<(char)toupper(input);
        else if(isupper(input)) cout<<(char)tolower(input);
        else if(isdigit(input));
        else cout<<input;
        cin.get(input);
    }
    cout<<endl;
}