#include <iostream>
#include "stonewt3.h"

stonewt::stonewt(double lbs){
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn;
    pounds = lbs;
}

stonewt::stonewt(int stn, double lbs){
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

stonewt::stonewt(){
    stone = pounds = pds_left = 0;
}

stonewt::~stonewt(){}

void stonewt::show_stn() const{
    std::cout<<stone<<"스톤, "<<pds_left<<"파운드"<<std::endl;
}

void stonewt::show_lbs() const{
    std::cout<<pounds<<std::endl;
}

bool operator>(const stonewt& st1, const stonewt& st2){
    if(st1.pounds > st2.pounds) return true;
    else return false;
}

bool operator>=(const stonewt& st1, const stonewt& st2){
    if(st1.pounds >= st2.pounds) return true;
    else return false;
}

bool operator<(const stonewt& st1, const stonewt& st2){
    if(st1.pounds < st2.pounds) return true;
    else return false;
}

bool operator<=(const stonewt& st1, const stonewt& st2){
    if(st1.pounds <= st2.pounds) return true;
    else return false;
}

bool operator==(const stonewt& st1, const stonewt& st2){
    if(st1.pounds == st2.pounds) return true;
    else return false;
}

bool operator!=(const stonewt& st1, const stonewt& st2){
    if(st1.pounds != st2.pounds) return true;
    else return false;
}