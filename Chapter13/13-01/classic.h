#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;

    public:
        Cd(char* s1, char* s2, int n, double x);
        Cd(const Cd& d);
        Cd(){}
        ~Cd(){}
        virtual void Report() const;
        Cd& operator=(const Cd& d);
};

class Classic : public Cd{
    private:
        char representative[100];

    public:
        Classic(char* s1, char* s2, char* s3, int n, double x);
        Classic(const Cd& d, char* s1);
        Classic(){}
        virtual void Report() const;
        Classic& operator=(const Classic& d);
};
#endif