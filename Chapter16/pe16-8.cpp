#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void input(vector<string>& v);

int main(){
    vector<string>mat;
    vector<string>pat;
    cout<<"Mat의 정보 입력"<<endl;
    input(mat);
    cout<<"Pat의 정보 입력"<<endl;
    input(pat);
    
    vector<string>invite = mat;
    for(auto x : pat) invite.push_back(x);
    sort(invite.begin(), invite.end());
    invite.erase(unique(invite.begin(), invite.end()), invite.end());
    cout<<"초대자 명단"<<endl;
    for(auto x : invite) cout<<x<<endl;
}

void input(vector<string>& v){
    int num;
    cout<<"초대할 인원을 입력하세요 : ";
    (cin>>num).get();
    for(int i = 0; i < num; ++i){
        string temp;
        cout<<i+1<<"번 째 입력 : ";
        getline(cin, temp);
        v.push_back(temp);
    }
    cout<<endl;
}