#include <iostream>
#include <cmath>
#include <stdexcept>

double hmean(double a, double b);
double gmean(double a, double b);

int main(){
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;
    cout<<"두 수를 입력하십시오: ";
    while (cin>>x>>y){
        try{
            z = hmean(x,y);
            cout<<x<<", "<<y<<"의 조화평균은 "<<z<<"입니다.\n";
            cout<<x<<", "<<y<<"의 기하평균은 "<<gmean(x, y)<<"입니다.\n";
            cout<<"다른 두 수를 입력하십시오(끝내려면 q): ";
        }
        catch(const std::domain_error& gg){
            cout<<gg.what();
            cout<<"죄송합니다. 더 이상 진행할 수 없습니다.\n";
            break;
        }

        catch(const std::logic_error& le){
            cout<<le.what();
            cout<<"다시 하십시오.\n";
            continue;
        }
    }
    cout<<"프로그램을 종료합니다.\n";
}

double hmean(double a, double b){
    if(a == -b) throw std::logic_error("hmean의 값은 a = -b 가 될 수 없습니다!\n");
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b){
    if(a < 0 || b < 0) throw std::domain_error("gmean의 값은 모두 양수여야 합니다!\n");
    return std::sqrt(a * b);
}