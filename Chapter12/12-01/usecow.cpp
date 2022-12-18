#include <iostream>
#include "cow.h"

int main(){
    Cow c1("c1", "cording", 72.3);
    Cow c2("c2", "Game", 88.1);
    Cow c3 = c2;

    c1.ShowCow();
    c2.ShowCow();
    c3.ShowCow();

    c3 = c2 = c1;
    c1.ShowCow();
    c2.ShowCow();
    c3.ShowCow();
}