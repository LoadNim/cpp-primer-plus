#include <iostream>
using namespace std;

double trans(double);

int main(){
    double light_year;
    cout<<"���� ���� �Է��ϰ� Enter Ű�� �����ʽÿ�: ";
    cin>>light_year;
    cout<<light_year<<" ������ "<<trans(light_year)<<" õ�� �����Դϴ�."<<endl;
}

double trans(double light_year){
    return light_year * 63240;
}