#include <iostream>
using namespace std;

int main(){
    const int SIMPLE_INTEREST = 10000;
    const float COMPOUND_INTEREST = 0.05;
    int a_value = 100000, b_value = 100000, year = 0;
    do{
        ++year;
        a_value += SIMPLE_INTEREST;
        b_value += b_value * COMPOUND_INTEREST;
    } while (a_value > b_value);
    cout<<year<<"년 후 A고객의 투자 가치 : "<<a_value<<endl;
    cout<<year<<"년 후 B고객의 투자 가치 : "<<b_value<<endl;
}