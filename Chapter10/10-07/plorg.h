#ifndef PLORG_H_
#define PLORG_H_

class plorg{
    private:
        static const int SIZE = 20;
        char name[SIZE];
        int ci;
    
    public:
        plorg(const char* name = "Plorga", int ci = 50);
        void change_ci(int ci);
        void show_plorg() const;
};
#endif