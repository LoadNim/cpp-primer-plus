#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(){
    ifstream fin_1("mat.dat");
    ifstream fin_2("pat.dat");
    string temp;
    vector<string>mat;
    vector<string>pat;

    while (getline(fin_1, temp)) mat.push_back(temp);
    sort(mat.begin(), mat.end());
    cout<<"mat의 초대 목록\n";
    for(auto x : mat) cout<<x<<endl;
    cout<<endl;

    while (getline(fin_2, temp)) pat.push_back(temp);
    sort(pat.begin(), pat.end());
    cout<<"pat의 초대목록\n";
    for(auto x : pat) cout<<x<<endl;
    cout<<endl;

    vector<string>invite = mat;
    for(auto x : pat) mat.push_back(x);
    sort(invite.begin(), invite.end());
    invite.erase(unique(invite.begin(), invite.end()), invite.end());

    ofstream fout("matnpat.dat", ios_base::out | ios_base::app);
    for(auto x : invite){
        fout<<x;
        fout<<'\n';
    }
    fin_1.close();
    fin_2.close();
    fout.close();
}