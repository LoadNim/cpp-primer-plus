#include <iostream>
#include <ctime>
#include "stonewt2.h"

stonewt::stonewt(double lbs, Mode form){
    mode = form;
    stone = int(lbs) / Lbs_per_stn;
    pds_left = int(lbs) % Lbs_per_stn;
    pounds = lbs;
}

stonewt::stonewt(int stn, double lbs, Mode form){
    mode = form;
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
}

stonewt::stonewt(){
    mode = Mode(rand() % 3);
    stone = pounds = pds_left = 0;
}

stonewt::~stonewt(){}

stonewt operator+(const stonewt& st1, const stonewt& st2){
    stonewt temp;
    temp.pounds = st1.pounds + st2.pounds;
    temp.stone = int(temp.pounds) / stonewt::Lbs_per_stn;
    temp.pds_left = int(temp.pounds) & stonewt::Lbs_per_stn;
    return temp;
}

stonewt operator-(const stonewt& st1, const stonewt& st2){
    stonewt temp;
    temp.pounds = st1.pounds - st2.pounds;
    temp.stone = int(temp.pounds) / stonewt::Lbs_per_stn;
    temp.pds_left = int(temp.pounds) & stonewt::Lbs_per_stn;
    return temp;
}

stonewt operator*(const stonewt& st1, const stonewt& st2){
    stonewt temp;
    temp.pounds = st1.pounds * st2.pounds;
    temp.stone = int(temp.pounds) / stonewt::Lbs_per_stn;
    temp.pds_left = int(temp.pounds) & stonewt::Lbs_per_stn;
    return temp;
}

std::ostream& operator<<(std::ostream& os, const stonewt& stn){
    if(stn.mode == stonewt::Mode::st){
        os<<stn.stone<<"스톤";
    }
    else if(stn.mode == stonewt::Mode::sap){
        os<<stn.stone<<"스톤, "<<stn.pds_left<<"파운드";
    }
    else{
        os<<stn.pounds<<"파운드";
    }
    return os;
}