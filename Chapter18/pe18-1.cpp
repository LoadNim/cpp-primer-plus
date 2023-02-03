#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
auto average_list(initializer_list<T> li){
    T sum = 0;
    for(auto t : li) sum += t;
    return sum / li.size();
}

int main(){
    auto q = average_list({15.4, 10.7, 9.0});
    cout<<q<<endl;
    cout<<average_list({20, 30, 19, 17, 45, 38})<<endl;
    auto ad = average_list<double>({'A', 70, 65.33});
    cout<<ad<<endl;
}