#include "move.h"

int main(){
    Move t1;
    t1.showmove();
    Move t2(15, 57);
    t2.showmove();
    t1 = t1.add(t2);
    t1.showmove();
    t1.reset();
    t1.showmove();
}