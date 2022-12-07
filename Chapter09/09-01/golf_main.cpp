#include <iostream>
#include "golf.h"

int main(){
    golf a;
    setgolf(a, "Load Nim", 10);
    showgolf(a);

    int size = 4;
    golf arr[size];
    for(int i = 0; i < size; ++i){
        bool flag = 0;
        flag = setgolf(arr[i]);
        if(flag == 0){
            size = i;
            break;
        }
    }

    for(int i = 0; i < size; ++i){
        showgolf(arr[i]);
    }
}