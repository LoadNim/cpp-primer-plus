#include <iostream>
#include <array>
using namespace std;

const int Seasons = 4;
const char* Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons>*pa);
void show(array<double, Seasons>da);

int main(){
    array<double, Seasons>expenses;
    fill(&expenses);
    show(expenses);
}

void fill(array<double, Seasons>*pa){
    for(int i = 0; i < 4; ++i){
        cout<<Sname[i]<<"에 소요되는 비용: ";
        cin>>(*pa)[i];
    }
}

void show(array<double, Seasons>da){
    double total = 0.0;
    cout<<"\n계절별 비용\n";
    for (int i = 0; i < Seasons; i++){
        cout<<Sname[i]<<" : $"<<da[i]<<endl;
        total += da[i];
    }
    cout<<"총 비용 : $"<<total<<endl;
}