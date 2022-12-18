#include <iostream>
#include "stack1.h"

void print(Stack& st);

int main(){
    Stack st1;
    Stack st2;
    Stack st3;

    for(int i = 0; i < 10; ++i){
        st1.push(i);
    }
    st3 = st1;
    std::cout<<"st1 출력\n";
    print(st1);
    std::cout<<"\nst3 출력\n";
    print(st3);

    for(int i = 9; i >= 0; --i){
        st2.push(i);
    }
    std::cout<<"\nst2 출력\n";
    print(st2);
}

void print(Stack& st){
    Item n;
    for(int i = 0; i < 10; ++i){
        st.pop(n);
        std::cout<<n<<"\t";
        if(st.isempty()) break; 
    }
}