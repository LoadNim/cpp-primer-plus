#ifndef EMP_H_
#define EMP_H_
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

enum classkind {Employee = 1, Manager, Fink, Highfink};

class employee{
    private:
        string fname;
        string lname;
        string job;
    
    public:
        employee() : fname("no"),lname("name"), job("none"){}
        virtual void setAll();
        virtual void writeAll(ofstream& fout);
        virtual void getAll(istream& fin);
        virtual void showAll() const;
};

class manager : virtual public employee{
    private:
        int inchargeof;
    
    protected:
        int InChargeOf() const {return inchargeof;}
        int& InChargeOf() {return inchargeof;}
    
    public:
        manager() : employee(), inchargeof(0){}
        virtual void setAll();
        virtual void writeAll(ofstream& fout);
        virtual void getAll(istream& fin);
        virtual void showAll() const;
};

class fink : virtual public employee{
    private:
        string reportsto;

    protected:
        const string ReportsTo() const {return reportsto;}
        string& ReportsTo() {return reportsto;}

    public:
        fink() : employee(), reportsto(){}
        virtual void setAll();
        virtual void writeAll(ofstream& fout);
        virtual void getAll(istream& fin);
        virtual void showAll() const;
};

class highfink : public manager, public fink{
    public:
        highfink() : manager(), fink(){}
        virtual void setAll();
        virtual void writeAll(ofstream& fout);
        virtual void getAll(istream& fin);
        virtual void showAll() const;
};
#endif