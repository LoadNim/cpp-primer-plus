#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream fin_1("test1.txt");
    ifstream fin_2("test2.txt");
    ofstream of("test3.txt", ios_base::out | ios_base::app);

    string temp;
    while (getline(fin_1, temp)){
        of<<temp;
        if(getline(fin_2, temp)){
            of<<' ';
            of<<temp;
            of<<'\n';
        }
        else break;
    }
    fin_1.close();
    fin_2.close();
    of.close();
}