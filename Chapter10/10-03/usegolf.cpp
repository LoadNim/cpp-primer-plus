#include <iostream>
#include "golf.h"

int main(){
    golf a("Load Nim", 10);
    a.showgolf();

    int size = 4;
    golf arr[size];
    for(int i = 0; i < size; ++i){
        bool flag = 0;
        flag = arr[i].setgolf();
        if(flag == 0){
            size = i;
            break;
        }
    }
    for(int i = 0; i < size; ++i) arr[i].showgolf();
}