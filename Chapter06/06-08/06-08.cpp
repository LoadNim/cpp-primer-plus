#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fp;
    fp.open("data.txt");
    int count = 0;
    while (!fp.eof()){
        fp.get();
        ++count;
    }
    fp.close();
    cout<<"감지된 문자의 수는 "<<count<<"개 입니다."<<endl;
}