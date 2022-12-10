#include "namesp.h"

int main(){
    double test[4] = {15.57, 99.4, 50.2, 75.3};
    Sales test_1(test, 4);
    test_1.showSales();

    Sales test_2;
    test_2.showSales();
}