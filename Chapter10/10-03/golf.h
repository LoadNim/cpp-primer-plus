#ifndef GOLF_H_
#define GOLF_H_

class golf{
    private:
        static const int Len = 90;
        char fullname[Len];
        int handicap;
        
    public:
        golf();
        golf(const char* name, int hc);
        int setgolf();
        void set_handicap(int hc);
        void showgolf() const;
};
#endif