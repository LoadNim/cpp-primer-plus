#include <iostream>
using namespace std;

struct car{
    char maker[20];
    int year;
};

int main(){
    int num;
    cout<<"�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
    cin>>num;
    cin.get();
    car* list = new car[num];
    for(int i = 0; i < num; ++i){
        cout<<"�ڵ��� #"<<i+1<<":"<<endl;
        cout<<"���۾�ü: ";
        cin>>list[i].maker;
        cin.get();
        cout<<"���۳⵵: ";
        cin>>list[i].year;
        cin.get();
    }
    cout<<"���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�."<<endl;
    for(int i = 0; i < num; i++){
        cout<<list[i].year<<"���� "<<list[i].maker<<endl;
    }
}