#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>

class acc{
    private:
        std::string name;
        std::string num;
        long long val;
    
    public:
        acc();
        void show_acc() const;
        void deposit();
        void withdraw();
};
#endif