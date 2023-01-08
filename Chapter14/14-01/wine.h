#ifndef WINE_H_
#define WINE_H_
#include <valarray>
#include <string>

template <typename T1, typename T2>
class Pair{
    private:
        T1 a;
        T2 b;
    public:
        T1 & first();
        T2 & second();
        T1 first() const { return a; }
        T2 second() const { return b; }
        Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
        Pair() {}   
};

class Wine{
    private:
        typedef std::valarray<int> ArrayInt;
        typedef Pair<ArrayInt, ArrayInt> PairArray;
        std::string label;
        PairArray p;
        int year_num;
    public:
        Wine(const char* l, int y) : label(l), year_num(y), p(ArrayInt(y), ArrayInt(y)){};
        Wine(const char* l, int y, const int yr[], const int bot[]) : label(l), year_num(y), p(ArrayInt(yr, y), ArrayInt(bot, y)){};
        std::string& Label();
        int sum(){return p.second().sum();}
        void GetBottles();
        void Show();
};
#endif