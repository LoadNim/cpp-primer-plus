#include <iostream>
#include <string>
#include <fstream>
#include "emp.h"
using namespace std;

void employee::setAll(){
    cout<<"이름을 입력하세요 : ";
    getline(cin, fname);
    cout<<"성을 입력하세요 : ";
    getline(cin, lname);
    cout<<"직무를 입력하세요 : ";
    getline(cin, job);
}

void employee::writeAll(ofstream& fout){
    fout<<fname<<'\n'<<lname<<'\n'<<job<<'\n';
}

void employee::getAll(istream& fin){
    getline(fin, fname);
    getline(fin, lname);
    getline(fin, job);
}

void employee::showAll() const{
    cout<<"이름 : "<<fname<<endl;
    cout<<"성 : "<<lname<<endl;
    cout<<"직무 : "<<job<<endl;
}

void manager::setAll(){
    employee::setAll();
    cout<<"관리 갯수를 입력하세요 : ";
    (cin>>inchargeof).get();
}

void manager::writeAll(ofstream& fout){
    employee::writeAll(fout);
    fout<<inchargeof<<'\n';
}

void manager::getAll(istream& fin){
    string temp;
    employee::getAll(fin);
    getline(fin, temp);
    inchargeof = stoi(temp);
}

void manager::showAll() const{
    employee::showAll();
    cout<<"관리 갯수 : "<<inchargeof<<endl;
}

void fink::setAll(){
    employee::setAll();
    cout<<"보고 대상을 입력하세요 : ";
    getline(cin, reportsto);
}

void fink::writeAll(ofstream& fout){
    employee::writeAll(fout);
    fout<<reportsto<<'\n';
}

void fink::getAll(istream& fin){
    employee::getAll(fin);
    getline(fin, reportsto);
}

void fink::showAll() const{
    employee::showAll();
    cout<<"보고 대상 : "<<reportsto<<endl;
}

void highfink::setAll(){
    employee::setAll();
    cout<<"관리 갯수를 입력하세요 : ";
    (cin>>manager::InChargeOf()).get();
    cout<<"보고 대상을 입력하세요 : ";
    getline(cin, fink::ReportsTo());
}

void highfink::writeAll(ofstream& fout){
    employee::writeAll(fout);
    fout<<manager::InChargeOf()<<'\n'<<fink::ReportsTo()<<'\n';
}

void highfink::getAll(istream& fin){
    string temp;
    employee::getAll(fin);
    getline(fin, temp);
    InChargeOf() = stoi(temp);
    getline(fin, ReportsTo());
}

void highfink::showAll() const{
    employee::showAll();
    cout<<"관리 갯수 : "<<manager::InChargeOf()<<endl;
    cout<<"보고 대상 : "<<fink::ReportsTo()<<endl;
}