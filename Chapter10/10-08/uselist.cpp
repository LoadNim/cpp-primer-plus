#include <iostream>
#include "list.h"

void set_double(Item&);
void set_zero(Item&);

int main(){
    list test_1;
    test_1.empty();
    test_1.full();
    for(int i = 0; i < 50; ++i){
        test_1.append(i);
    }
    test_1.show_list();
    test_1.empty();
    test_1.full();

    list test_2;
    test_2.empty();
    test_2.full();
    for(int i = 49; i >= 0; --i){
        test_2.append(i);
    }
    test_2.show_list();
    test_2.empty();
    test_2.full();

    test_1.visit(set_double);
    test_1.show_list();
    test_2.visit(set_zero);
    test_2.show_list();
}

void set_double(Item& i){i*=2;}
void set_zero(Item& i){i = 0;}
