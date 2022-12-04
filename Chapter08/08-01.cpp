#include <iostream>
using namespace std;

void print(const char* str, int n = 0);

int main(){
    const char* t1 = "test1";
    const char* t2 = "test2";
    const char* t3 = "loop";

    print(t1);
    print(t2);
    print(t3, 1);
}

void print(const char* str, int n){
    static int count = 0;
    ++count;
    if(!n) cout<<str<<endl;
    else{
        for(int i = 0; i < count; i++){
            cout<<"반복"<<i+1<<"회 : "<<str<<endl;
        }
    }
}