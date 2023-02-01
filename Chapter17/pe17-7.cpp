#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

class Store{
    public:
        ofstream& fout;
        Store(ofstream& of) : fout(of){}
        void operator()(const string& st);
};

void ShowStr(const string& str);
void GetStrs(ifstream& fin, vector<string>&vec);

int main(){
    vector<string>vostr;
    string temp;

    cout<<"문자열들을 입력하십시오(끝내려면 빈 줄 입력):\n";
    while(getline(cin, temp) && temp[0] != '\0') vostr.push_back(temp);
    cout<<"다음과 같이 입력하셨습니다.\n";
    for_each(vostr.begin(), vostr.end(), ShowStr);

    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    vector<string>vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if(!fin.is_open()){
        cerr<<"입력을 위한 파일을 열 수 없습니다.\n";
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout<<"\n파일로부터 읽은 문자열들은 다음과 같습니다:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);
}

void ShowStr(const string& str){
    cout<<str<<endl;
}

void GetStrs(ifstream& fin, vector<string>&vec){
    string temp;
    size_t len;
    while(fin.read((char*)&len, sizeof(size_t)) && len > 0){
        char ch;
        temp = "";
        for(int i = 0; i < len; ++i){
            if(fin.read(&ch, 1)){
                temp += ch;
            }
            else break;
        }
        if(fin) vec.push_back(temp);
    }
}

void Store::operator()(const string& st){
    size_t len = st.size();
    fout.write((char*)&len, sizeof(size_t));
    fout.write(st.data(), len);
}