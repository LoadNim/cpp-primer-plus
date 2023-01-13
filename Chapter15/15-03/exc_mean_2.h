#ifndef EXC_MEAN_2_H_
#define EXC_MEAN_2_H_
#include <iostream>
#include <string>
#include <stdexcept>

class bad_mean : public std::logic_error{
    private:
        double v1;
        double v2;

    public:
        bad_mean(std::string& err_msg, double a = 0, double b = 0) : v1(a), v2(b), logic_error(err_msg){}
        void show(){std::cout<<"입력 된 값 : "<<v1<<", "<<v2<<std::endl;}
        virtual void report(bad_mean& bm) const = 0;
};

class bad_hmean : public bad_mean{
    public:
        bad_hmean(std::string& err_msg, double a = 0, double b = 0) : bad_mean(err_msg, a, b){}
        virtual void report(bad_mean& bm) const;
};

class bad_gmean : public bad_mean{
    public:
        bad_gmean(std::string& err_msg, double a = 0, double b = 0) : bad_mean(err_msg, a, b){}
        virtual void report(bad_mean& bm) const;
};

void bad_hmean::report(bad_mean& bm) const{
    std::cout<<"hmean() 에서 오류 발생!\n";
    bm.show();
}

void bad_gmean::report(bad_mean& bm) const{
    std::cout<<"gmean() 에서 오류 발생!\n";
    bm.show();
}
#endif