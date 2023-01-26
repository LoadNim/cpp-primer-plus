#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> Lotto(int range, int num);

int main(){
    int range, num;
    cout<<"로또의 숫자는 1부터 몇까지입니까? : ";
    if(cin>>range && range > 0){
        cout<<"몇개의 숫자를 뽑습니까? : ";
        if(cin>>num && num <= range){
            vector<int>winner;
            winner = Lotto(range, num);
            cout<<"당첨 번호"<<endl;
            for(auto x : winner) cout<<x<<" ";
            cout<<endl;
        }
        else{
            cout<<"잘못 된 입력입니다."<<endl;
            cout<<"프로그램을 종료합니다."<<endl;
            exit(1);
        }
    }
    else{
        cout<<"잘못 된 입력입니다."<<endl;
        cout<<"프로그램을 종료합니다."<<endl;
        exit(1);
    }
    cout<<"프로그램을 종료합니다."<<endl;
}

vector<int> Lotto(int range, int num){
    vector<int>winner;
    for(int i = 1; i <= range; ++i) winner.push_back(i);
    random_shuffle(winner.begin(), winner.end());
    winner.resize(num);
    return winner;
}