#include <iostream>
using namespace std;

void show_time(int, int);

int main(){
    int hour, min;
    cout<<"�ð� ���� �Է��Ͻÿ�: ";
    cin>>hour;
    cout<<"�� ���� �Է��Ͻÿ�: ";
    cin>>min;
    show_time(hour, min);
}

void show_time(int hour, int min){
    cout<<"�ð�: "<<hour<<':'<<min<<endl;
}