#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    if(argc <= 2){
        cerr<<"사용법 : (실행파일) (원본파일) (복사할 파일)\n";
        exit(1);
    }

    ifstream fin(argv[1]);
    if(!fin.is_open()){
        cerr<<"해당하는 원본 파일이 없습니다.\n";
        exit(1);
    }

    char ch;
    ofstream fout(argv[2]);
    while(fin>>ch){
        fout<<ch;
    }
    cout<<argv[1]<<"에서 "<<argv[2]<<"로의 복사가 완료되었습니다.\n";
    fin.close();
    fout.close();
}