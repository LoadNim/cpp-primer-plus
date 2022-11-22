#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct donate{
    string name;
    double money;
};

int main(){
    int size;
    double average = 0;
    fstream fp("06-09.txt");
    fp>>size;
    fp.get();
    donate *arr = new donate[size];
    for(int i = 0; i < 4; ++i){
        getline(fp, arr[i].name);
        fp>>arr[i].money;
        fp.get();
        average += arr[i].money / size;
    }
    cout<<"고액 기부자"<<endl;
    for(int i = 0; i < size; i++){
        if(arr[i].money >= average) cout<<arr[i].name<<endl;
    }
    cout<<"소액 기부자"<<endl;
    for(int i = 0; i < size; i++){
        if(arr[i].money < average) cout<<arr[i].name<<endl;
    }
}