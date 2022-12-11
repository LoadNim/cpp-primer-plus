#include <iostream>
#include "move.h"

Move::Move(double a, double b){
    x = a, y = b;
}

void Move::showmove() const{
    using std::cout;
    using std::endl;
    cout<<"x : "<<x<<", y: "<<y<<endl;
}

Move Move::add(const Move& m) const{
    Move temp;
    temp.x = this->x + m.x;
    temp.y = this->y + m.y;
    return temp;
}

void Move::reset(double a, double b){
    x = a, y = b;
}