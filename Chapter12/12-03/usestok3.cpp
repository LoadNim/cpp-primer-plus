#include <iostream>
#include "stock3.h"

const int STKS = 4;

int main(){
    using std::cout;
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Obelisks", 130, 3.25),
        Stock("fleep Enterprises", 60, 6.5)
    };

    cout<<"보유 주식 리스트:\n";
    int st;
    for(st = 0; st < STKS; ++st) cout<<stocks[st];
    const Stock* top = &stocks[0];
    for(st = 1; st < STKS; ++st) top = &top->topval(stocks[st]);

    cout<<"\n최고 가치의 주식:\n";
    cout<<*top;
    cout<<std::endl<<std::endl;

    stocks[0].buy(100, 25.0);
    stocks[1].sell(100, 4.0);
    stocks[2].sell(150, 1.5);
    stocks[3].buy(40, 5.0);

    cout<<"보유 주식 리스트:\n";
    for(st = 0; st < STKS; ++st) cout<<stocks[st];
    top = &stocks[0];
    for(st = 1; st < STKS; ++st) top = &top->topval(stocks[st]);
    cout<<"\n최고 가치의 주식:\n";
    cout<<*top;
}