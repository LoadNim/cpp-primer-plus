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
        void show_acc(acc& ac) const;
        void deposit(acc& ac);
        void withdraw(acc& ac);
};
#endif