#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Person{
    private:
        static const int LIMIT = 25;
        string lname;
        char fname[LIMIT];
        
    public:
        Person(){lname = ""; fname[0] = '\0';}
        Person(const string& ln, const char* fn = "Heyyou");
        void Show() const;
        void FormalSHow() const;
};

int main(){
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    one.Show();
    one.FormalSHow();

    two.Show();
    two.FormalSHow();

    three.Show();
    three.FormalSHow();
}

Person::Person(const string& ln, const char* fn){
    this->lname = ln;
    strcpy(this->fname, fn);
}

void Person::Show() const{
    cout<<fname<<", "<<lname<<endl;
}

void Person::FormalSHow() const{
    cout<<lname<<", "<<fname<<endl;
}