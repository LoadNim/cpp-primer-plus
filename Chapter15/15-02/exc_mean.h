#ifndef EXC_HMEAN_
#define EXC_HMEAN_
#include <iostream>
#include <string>
#include <stdexcept>

class bad_hmean : public std::logic_error{
    private:
        double v1;
        double v2;

    public:
        bad_hmean(std::string& err_msg, double a = 0, double b = 0) : v1(a), v2(b), logic_error(err_msg){}
        void show(){std::cout<<"입력 된 값 : "<<v1<<", "<<v2<<std::endl;}
};

class bad_gmean : public std::logic_error{
    private:
        double v1;
        double v2;
    public:
        bad_gmean(std::string& err_msg, double a = 0, double b = 0) : v1(a), v2(b), logic_error(err_msg){}
        void show(){std::cout<<"입력 된 값 : "<<v1<<", "<<v2<<std::endl;}
};

#endif