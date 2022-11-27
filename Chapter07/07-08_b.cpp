#include <iostream>
using namespace std;

const int Seasons = 4;
const char* Sname[Seasons] = {"Spring", "Summer", "Fall", "Winter"};
struct expenses{
    double cost[Seasons];
};

void fill(expenses* arr);
void show(expenses arr);

int main(){
    expenses ex;
    fill(&ex);
    show(ex);
}

void fill(expenses* arr){
    for(int i = 0; i < 4; ++i){
        cout<<Sname[i]<<"에 소요되는 비용: ";
        cin>>arr->cost[i];
    }
}

void show(expenses arr){
    double total = 0.0;
    cout<<"\n계절별 비용\n";
    for (int i = 0; i < Seasons; i++){
        cout<<Sname[i]<<" : $"<<arr.cost[i]<<endl;
        total += arr.cost[i];
    }
    cout<<"총 비용 : $"<<total<<endl;
}