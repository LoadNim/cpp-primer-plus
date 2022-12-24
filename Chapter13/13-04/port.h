#ifndef PORT_H_
#define PORT_H_
#include <iostream>
using namespace std;

class Port{
    private:
        char* brand;
        char style[20];
        int bottles;

    public:
        Port(const char* br = "none", const char* st = "none", int b = 0);
        Port(const Port& p);
        virtual ~Port(){delete []brand;}
        Port& operator=(const Port& p);
        Port& operator+=(int b);
        Port& operator-=(int b);
        int BottleCount() const{return bottles;}
        virtual void show() const;
        friend ostream& operator<<(ostream& os, const Port& p);
};

class VintagePort : public Port{
    private:
        char* nickname;        
        int year;

    public:
        VintagePort();
        VintagePort(const char* ni, const char* br, const char* st, int y, int b);
        VintagePort(const VintagePort& vp);
        ~VintagePort(){delete [] nickname;}
        VintagePort& operator=(const VintagePort& vp);
        virtual void show() const;
        friend ostream& operator<<(ostream& os, const VintagePort& vp);
};
#endif