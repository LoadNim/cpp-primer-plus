#include <iostream>
using namespace std;

struct candybar{
    const char* name;
    double weight;
    int cal;
};

int main(){
    candybar* snack = new candybar[3];
    snack[0] = {"Mocha Munch", 2.3, 350};
    snack[1] = {"Mocha Munch2", 3, 400};
    snack[2] = {"Mocha Munch3", 4, 500};

    cout<<"이름: "<<snack[0].name<<endl;
    cout<<"중량: "<<snack[0].weight<<"g"<<endl;
    cout<<"칼로리: "<<snack[0].cal<<"cal"<<endl<<endl;

    cout<<"이름: "<<snack[1].name<<endl;
    cout<<"중량: "<<snack[1].weight<<"g"<<endl;
    cout<<"칼로리: "<<snack[1].cal<<"cal"<<endl<<endl;

    cout<<"이름: "<<snack[2].name<<endl;
    cout<<"중량: "<<snack[2].weight<<"g"<<endl;
    cout<<"칼로리: "<<snack[2].cal<<"cal"<<endl;
}