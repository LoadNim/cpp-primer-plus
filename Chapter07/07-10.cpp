#include <iostream>
using namespace std;

double calculate(double x, double y, double(*pt)(double, double));
double add(double x, double y);
double min(double x, double y);
double mul(double x, double y);
double div(double x, double y);

int main(){
    double x, y;
    double q[4];
    double (*pt[4])(double, double) = {add, min, mul, div};
    cout<<"두 수 입력 : ";
    cin>>x>>y;
    for(int i = 0; i < 4; ++i){
        q[i] = calculate(x, y, pt[i]);
    }
    cout<<x<<"+"<<y<<"= "<<q[0]<<endl;
    cout<<x<<"-"<<y<<"= "<<q[1]<<endl;
    cout<<x<<"*"<<y<<"= "<<q[2]<<endl;
    cout<<x<<"/"<<y<<"= "<<q[3]<<endl;
}

double calculate(double x, double y, double(*pt)(double, double)){
    return pt(x, y);
}

double add(double x, double y){
    return x + y;
}

double min(double x, double y){
    return x - y;
}

double mul(double x, double y){
    return x * y;
}

double div(double x, double y){
    return x / y;
}