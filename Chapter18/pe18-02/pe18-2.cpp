#include "cpmv.h"

int main(){
    Cpmv cp1("test_q", "test_z");
    Cpmv cp2("test2_q", "test2_z");
    Cpmv cp3;
    cp3 = cp1 + cp2;
    cp1.Display();
    cp2.Display();
    cp3.Display();
}