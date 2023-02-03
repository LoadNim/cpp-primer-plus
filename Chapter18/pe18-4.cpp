#include <iostream>
#include <list>
#include <algorithm>

int main(){
    using namespace std;
    int arr[10] = {10, 20, 100, 150, 200, 30, 40, 60, 80, 120};
    list<int>li(arr, arr+10);
    auto outint = [](int n){cout<<n<<"\t";};
    for(auto x : li) outint(x);
    cout<<endl;
    li.remove_if([](int v){return v > 100;});
    for(auto x : li) outint(x);
}