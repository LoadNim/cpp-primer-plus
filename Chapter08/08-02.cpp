#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar{
    char name[20];
    double weight;
    int cal;
};

void input(CandyBar& c, const char* name = "Millennium Munch", double weight = 2.85, int cal = 350);
void print(CandyBar& c);

int main(){
    CandyBar c1;
    input(c1, "Candy Bar", 1.5, 248);
    print(c1);

    CandyBar c2;
    input(c2);
    print(c2);
}

void input(CandyBar& c, const char* name, double weight, int cal){
    strcpy(c.name, name);
    c.weight = weight;
    c.cal = cal;
}

void print(CandyBar& c){
    cout<<"캔디바 이름 : "<<c.name<<endl;
    cout<<"중량 : "<<c.weight<<endl;
    cout<<"칼로리 : "<<c.cal<<endl;
}