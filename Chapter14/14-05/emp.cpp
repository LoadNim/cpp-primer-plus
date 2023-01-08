#include <iostream>
#include <string>
#include "emp.h"

using std::cout;
using std::cin;
using std::endl;

void abstr_emp::ShowAll() const{
    cout<<"이름 : "<<fname<<endl;
    cout<<"성 : "<<lname<<endl;
    cout<<"직무 : "<<job<<endl;
}

void abstr_emp::SetAll(){
    cin.get();
    cout<<"이름을 입력하세요 : ";
    getline(cin, fname);
    cout<<"성을 입력하세요 : ";
    getline(cin, lname);
    cout<<"직무를 입력하세요 : ";
    getline(cin, job);
}

std::ostream& operator<<(std::ostream& os, const abstr_emp& e){
    os<<"이름 : "<<e.fname<<endl;
    os<<"성 : "<<e.lname<<endl;
    cout<<"직무 : "<<e.job<<endl;
    return os;
}

void manager::ShowAll() const{
    abstr_emp::ShowAll();
    cout<<"관리 갯수 : "<<inchargeof<<endl;
}

void manager::SetAll(){
    abstr_emp::SetAll();
    cout<<"관리 갯수를 입력하세요 : ";
    cin>>inchargeof;
}

void fink::ShowAll() const{
    abstr_emp::ShowAll();
    cout<<"보고 대상 : "<<reportsto<<endl;
}

void fink::SetAll(){
    abstr_emp::SetAll();
    cout<<"보고 대상을 입력하세요 : ";
    getline(cin, reportsto);
}

void highfink::ShowAll() const{
    abstr_emp::ShowAll();
    cout<<"관리 갯수 : "<<manager::InChargeOf()<<endl;
    cout<<"보고 대상 : "<<fink::ReportsTo()<<endl;
}

void highfink::SetAll(){
    abstr_emp::SetAll();
    cout<<"관리 갯수를 입력하세요 : ";
    cin>>manager::InChargeOf();
    cin.get();
    cout<<"보고 대상을 입력하세요 : ";
    getline(cin, fink::ReportsTo());
}

abstr_emp::~abstr_emp(){}