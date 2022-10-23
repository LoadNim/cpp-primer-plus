#include <iostream>
using namespace std;

struct candybar{
    const char* name;
    double weight;
    int cal;
};

int main(){
    candybar snack{"Moch Munch", 2.3, 350};
    cout<<"이름: "<<snack.name<<endl;
    cout<<"중량: "<<snack.weight<<"g"<<endl;
    cout<<"칼로리: "<<snack.cal<<"cal"<<endl;
}