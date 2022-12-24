#ifndef CLASSIC1_H_
#define CLASSIC1_H_

class Cd{
    private:
        char* performers;
        char* label;
        int selections;
        double playtime;

    public:
        Cd(const char* s1, const char* s2, const int n, const double x);
        Cd(const Cd& d);
        Cd();
        ~Cd();
        virtual void Report() const;
        Cd& operator=(const Cd& d);
};

class Classic : public Cd{
    private:
        char* representative;

    public:
        Classic(const char* s1, const char* s2, const char* s3, const int n, const double x);
        Classic(const Cd& d, const char* s1);
        Classic();
        ~Classic();
        virtual void Report() const;
        Classic& operator=(const Classic& d);
};
#endif