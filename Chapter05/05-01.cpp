#include <iostream>
using namespace std;

int main(){
    int start, end, sum = 0;
    cout<<"두 수를 작은 수 부터 입력하세요 : ";
    cin>>start>>end;
    for(int i = start; i <= end; ++i){
        sum += i;
    }
    cout<<start<<"부터 "<<end<<"까지의 합은 "<<sum<<"입니다."<<endl;
}