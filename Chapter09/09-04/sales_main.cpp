#include <iostream>
#include "sales.h"

int main(){
    double test[4] = {50.2, 99.4, 30.2, 75.3};
    SALES::Sales test_1;
    SALES::setSales(test_1, test, 4);
    SALES::showSales(test_1);

    SALES::Sales test_2;
    SALES::setSales(test_2);
    SALES::showSales(test_2);
}