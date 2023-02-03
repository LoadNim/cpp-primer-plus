#include <iostream>

template<typename T>
long double sum_value(const T& value){
    return (long double)value;
}

template<typename T, typename... Args>
long double sum_value(const T& value, const Args&... args){
    long double sum = 0;
    return sum_value(value) + sum_value(args...);
}

int main(){
    std::cout<<sum_value(1, 2, 3, 4, 'A', 'B', 0)<<std::endl;
}