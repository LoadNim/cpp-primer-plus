#include <iostream>
#include <cstring>
#include <new>

char buffer[512];
struct chaff{
    char dross[20];
    int slag;
};

int main(){
    using std::cout;
    using std::endl;
    chaff* arr = new (buffer) chaff[2];
    strcpy(arr[0].dross, "test1");
    strcpy(arr[1].dross, "test2");
    arr[0].slag = 1;
    arr[1].slag = 2;
    for(int i = 0; i < 2; ++i){
        cout<<"drose : "<<arr[i].dross<<endl;
        cout<<"slag : "<<arr[i].slag<<endl;
    }
}