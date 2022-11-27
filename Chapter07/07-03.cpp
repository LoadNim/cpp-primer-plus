#include <iostream>
using namespace std;

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void output(box b);
void input_vol(box* b);

int main(){
    box b = {"box maker", 100, 50, 30, 0};
    output(b);
    input_vol(&b);
    output(b);
}

void output(box b){
    cout<<"제조사 : "<<b.maker<<endl;
    cout<<"높이 : "<<b.height<<endl;
    cout<<"너비 : "<<b.width<<endl;
    cout<<"길이 : "<<b.length<<endl;
    cout<<"부피 : "<<b.volume<<endl;
}

void input_vol(box *b){
    b->volume = b->height * b->width * b->length;
    cout<<"부피값 설정 완료"<<endl;
}