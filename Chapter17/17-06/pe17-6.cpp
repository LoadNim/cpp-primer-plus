#include <iostream>
#include <fstream>
#include <string>
#include "emp.h"
using namespace std;

const int MAX = 10;

int main(){
    int i = 0;
    int sel = 0;
    string temp;
    employee* pc[MAX];
    ofstream fout("test.txt", ios_base::app | ios_base::out);

    cout<<"데이터 입력을 시작합니다.\n";
    cout<<"1. employee, 2. manager, 3. fink, 4. highfink, 5. 종료\n";
    while((cin>>sel).get() && sel != 5 && i < MAX){
        switch(sel){
            case Employee:
                pc[i] = new employee;
                pc[i]->setAll();
                fout<<"1\n";
                pc[i++]->writeAll(fout);
                break;
            case Manager:
                pc[i] = new manager;
                pc[i]->setAll();
                fout<<"2\n";
                pc[i++]->writeAll(fout);
                break;
            case Fink:
                pc[i] = new fink;
                pc[i]->setAll();
                fout<<"3\n";
                pc[i++]->writeAll(fout);
                break;
            case Highfink:
                pc[i] = new highfink;
                pc[i]->setAll();
                fout<<"4\n";
                pc[i++]->writeAll(fout);
                break;
            default:
                cout<<"잘못된 입력입니다.\n";
        }
        cout<<"1. employee, 2. manager, 3. fink, 4. highfink 5. 종료\n";
    }

    i = 0;

    cout<<"데이터를 가져옵니다.\n";
    ifstream fin("test.txt");
    while(getline(fin, temp)){
        sel = stoi(temp);
        switch(sel){
            case Employee:
                pc[i] = new employee;
                break;
            case Manager:
                pc[i] = new manager;
                break;
            case Fink:
                pc[i] = new fink;
                break;
            case Highfink:
                pc[i] = new highfink;
                break;
        }
        pc[i++]->getAll(fin);
    }
    cout<<"데이터를 표시합니다.\n";
    for(int r = 0; r < i; ++r){
        pc[r]->showAll();
    }
    cout<<"프로그램을 종료합니다.\n";
}