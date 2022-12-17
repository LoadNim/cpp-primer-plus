#ifndef STONEWT3_H_
#define STONEWT3_H_
#include <iostream>

class stonewt{
    private:
        enum{Lbs_per_stn = 14};
        int stone;
        double pds_left;
        double pounds;
    
    public:
        stonewt(double lbs);
        stonewt(int stn, double lbs);
        stonewt();
        ~stonewt();
        void show_stn() const;
        void show_lbs() const;
        friend bool operator>(const stonewt& st1, const stonewt& st2);
        friend bool operator>=(const stonewt& st1, const stonewt& st2);
        friend bool operator<(const stonewt& st1, const stonewt& st2);
        friend bool operator<=(const stonewt& st1, const stonewt& st2);
        friend bool operator==(const stonewt& st1, const stonewt& st2);
        friend bool operator!=(const stonewt& st1, const stonewt& st2);
};
#endif