#include <iostream>
#include "list.h"

list::list(){size = 0;}

void list::append(int n){
    arr[size] = n;
    ++size;
}

void list::empty() const{
    using std::cout;
    using std::endl;
    if(!size) cout<<"리스트가 비어있습니다."<<endl;
    else cout<<"리스트가 비어있지 않습니다."<<endl;
}

void list::full() const{
    using std::cout;
    using std::endl;
    if(size == 50) cout<<"리스트가 차있습니다."<<endl;
    else cout<<"리스트가 차있지 않습니다."<<endl;
}

void list::show_list() const{
    using std::cout;
    using std::endl;
    for(int i = 0; i < size; ++i){
        cout<<"arr["<<i<<"] : "<<arr[i]<<endl;
    }
}

void list::visit(void (*pf)(Item&)){
    for(int i = 0; i < size; ++i){
        pf(arr[i]);
    }
}