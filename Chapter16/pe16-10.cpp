#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

struct Review{
    string title;
    int rating;
    int price;
};

bool FillReview(Review& rr);
bool worseThan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
bool comprice(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2);
void ShowReview(const shared_ptr<Review> rr);


int main(){
    vector<shared_ptr<Review>>books;
    shared_ptr<Review> temp(new Review);
    while (FillReview(*temp)){
        books.push_back(temp);
        temp.reset(new Review);
    }
    vector<shared_ptr<Review>>base = books;
    if(books.size() > 0){
        for(;;){
            int sel;
            cout<<"표시 방법을 선택하십시오"<<endl;
            cout<<"1. 입력 순\n";
            cout<<"2. 이름 순\n";
            cout<<"3. 등급 순\n";
            cout<<"4. 가격 순\n";
            cout<<"5. 종료\n";
            (cin>>sel).get();
            
            switch(sel){
                case 1:
                    cout<<"책 입력을 기준으로 정렬:\n등급\t제목\t가격\n";
                    for_each(base.begin(), base.end(), ShowReview);
                    break;
                case 2:
                    sort(books.begin(), books.end());
                    cout<<"책 이름을 기준으로 정렬:\n등급\t제목\t가격\n";
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case 3:
                    sort(books.begin(), books.end(), worseThan);
                    cout<<"책 등급을 기준으로 정렬:\n등급\t제목\t가격\n";
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case 4:
                    sort(books.begin(), books.end(), comprice);
                    cout<<"책 가격을 기준으로 정렬:\n등급\t제목\t가격\n";
                    for_each(books.begin(), books.end(), ShowReview);
                    break;
                case 5:
                    cout<<"프로그램을 종료합니다."<<endl;
                    exit(0);
                default:
                    cout<<"잘못 된 입력입니다."<<endl;
            }
        }
    }
}

bool FillReview(Review& rr){
    cout<<"책 제목을 입력하십시오(끝내려면 quit): ";
    getline(cin, rr.title);
    if(rr.title == "quit") return false;
    cout<<"책 등급(0-10)을 입력하십시오: ";
    cin>>rr.rating;
    if(!cin) return false;
    while(cin.get() != '\n') continue;
    cout<<"책 가격을 입력하십시오: ";
    cin>>rr.price;
    if(!cin && rr.price < 0) return false;
    while(cin.get() != '\n') continue;
    return true;
}

bool worseThan(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2){
    if(r1->rating < r2->rating) return true;
    else return false;
}

bool comprice(const shared_ptr<Review>& r1, const shared_ptr<Review>& r2){
    if(r1->price < r2->price) return true;
    else return false;
}

void ShowReview(const shared_ptr<Review> rr){
    cout<<rr->rating<<'\t'<<rr->title<<'\t'<<rr->price<<endl;
}