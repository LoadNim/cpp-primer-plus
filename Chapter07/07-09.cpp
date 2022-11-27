#include <iostream>
#include <cstring>
using namespace std;

const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);

int main(){
    cout<<"학급의 학생 수를 입력하십시오: ";
    int class_size;
    cin>>class_size;
    while (cin.get() != '\n') continue;

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    cout<<"프로그램을 종료합니다"<<endl;
}

int getinfo(student pa[], int n){
    int i = 0;
    for(i; i < n; ++i){
        cout<<"이름 입력 : ";
        cin.getline(pa[i].fullname, SLEN);
        if(!strcmp(pa[i].fullname, "")) break;
        cout<<"취미 입력 : ";
        cin.getline(pa[i].hobby, SLEN);
        cout<<"등급 입력 : ";
        (cin>>pa[i].ooplevel).get();
    }
    return i;
}

void display1(student st){
    cout<<"이름 : "<<st.fullname<<endl;
    cout<<"취미 : "<<st.hobby<<endl;
    cout<<"등급 : "<<st.ooplevel<<endl;
}

void display2(const student* ps){
    cout<<"이름 : "<<ps->fullname<<endl;
    cout<<"취미 : "<<ps->hobby<<endl;
    cout<<"등급 : "<<ps->ooplevel<<endl;
}

void display3(const student pa[], int n){
    for(int i = 0; i < n; ++i){
        cout<<"이름 : "<<pa[i].fullname<<endl;
        cout<<"취미 : "<<pa[i].hobby<<endl;
        cout<<"등급 : "<<pa[i].ooplevel<<endl;
    }
}