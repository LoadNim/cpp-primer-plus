#include <iostream>
using namespace std;

void c_to_f(int);

int main(){
    int celsius;
    cout<<"���� �µ��� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
    cin>>celsius;
    c_to_f(celsius);
}

void c_to_f(int celsius){
    cout<<"���� "<<celsius<<"���� ȭ���� "<<celsius*1.8+32.0<<"���Դϴ�."<<endl;
}