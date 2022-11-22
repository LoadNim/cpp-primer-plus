#include <iostream>
#include <string>
using namespace std;

struct donate{
    string name;
    double money;
};

int main(){
    cout<<"기부자의 수를 입력하십시오 : ";
    int num;
    cin>>num;
    cin.get();
    if(num){
        double average = 0;
        donate *arr = new donate[num];
        for(int i = 0; i < num; ++i){
            cout<<i+1<<"번째 기부자의 이름을 입력하시오 : ";
            cin>>arr[i].name;
            cout<<arr[i].name<<"님의 기부금을 입력하시오 : ";
            cin>>arr[i].money;
            average += arr[i].money / num;
        }
        cout<<"고액 기부자"<<endl;
        for(int i = 0; i < num; i++){
            if(arr[i].money >= average) cout<<arr[i].name<<endl;
        }
        cout<<"소액 기부자"<<endl;
        for(int i = 0; i < num; i++){
            if(arr[i].money < average) cout<<arr[i].name<<endl;
        }
    }
    else cout<<"기부자가 없습니다.";
}