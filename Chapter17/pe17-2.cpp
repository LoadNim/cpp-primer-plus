#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]){
    if(argc <= 2){
        cerr<<"사용법 : (실행파일) (입력할 내용) (복사할 파일 이름)";
        exit(1);
    }

    ofstream fo(argv[2]);
    fo<<argv[1];
    fo.close();
}