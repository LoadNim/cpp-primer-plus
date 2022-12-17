#ifndef STONEWT2_H_
#define STONEWT2_H_
#include <iostream>

class stonewt{
    public:
        enum Mode{st, sap, p};

    private:
        enum{Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
        Mode mode;

    public:
        stonewt(double lbs, Mode from = st);
        stonewt(int stn, double lbs, Mode from = st);
        stonewt();
        ~stonewt();
        friend stonewt operator+(const stonewt& st1, const stonewt& st2);
        friend stonewt operator-(const stonewt& st1, const stonewt& st2);
        friend stonewt operator*(const stonewt& st1, const stonewt& st2);
        friend std::ostream& operator<<(std::ostream& os, const stonewt& st);
};
#endif