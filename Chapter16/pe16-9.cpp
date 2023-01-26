#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <ctime>
using namespace std;

int main(){
    vector<int>vi0;
    for(int i = 0; i < 10000000; ++i) vi0.push_back(rand());
    vector<int>vi;
    list<int>li;
    vi.assign(vi0.begin(), vi0.end());
    li.assign(vi0.begin(), vi0.end());

    clock_t start = clock();
    sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout<<"STL sort() : ";
    cout<<(double)(end - start) / CLOCKS_PER_SEC<<endl;

    start = clock();
    li.sort();
    end = clock();
    cout<<"list sort() : ";
    cout<<(double)(end - start) / CLOCKS_PER_SEC<<endl;

    li.assign(vi0.begin(), vi0.end());
    start = clock();
    vi.assign(li.begin(), li.end());
    sort(vi.begin(), vi.end());
    li.assign(vi.begin(), vi.end());
    end = clock();
    cout<<"result : ";
    cout<<(double)(end - start) / CLOCKS_PER_SEC<<endl;
}