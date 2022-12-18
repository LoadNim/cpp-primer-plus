#include <iostream>
#include "stack1.h"

Stack::Stack(int n){
    pitems = new Item[n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack& st){
    pitems = new Item[st.size];
    size = st.size;
    top = st.top;

    for(int i = 0; i < top; ++i){
        pitems[i] = st.pitems[i];
    }
}

Stack::~Stack(){
    delete []pitems;
}

bool Stack::isempty() const{
    return top == 0;
}

bool Stack::isfull() const{
    return size == top;
}

bool Stack::push(const Item& item){
    if(isfull()){
        return false;
    }
    else{
        pitems[top] = item;
        ++top;
        return true;
    }
}

bool Stack::pop(Item& item){
    if(isempty()){
        return false;
    }
    else{
        item = pitems[--top];
        return true;
    }
}

Stack& Stack::operator=(const Stack& st){
    delete []pitems;
    pitems = new Item[st.size];
    size = st.size;
    top = st.top;

    for(int i = 0; i < top; ++i){
        pitems[i] = st.pitems[i];
    }
    return *this;
}