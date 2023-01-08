#ifndef WINE2_H_
#define WINE2_H_
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

typedef std::valarray<int> ArrayInt;
class Wine : private Pair<ArrayInt, ArrayInt>{
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    private:
        std::string label;
        int year_num;
    public:
        Wine(const char* l, int y) : label(l), year_num(y), PairArray(ArrayInt(y), ArrayInt(y)){}
        Wine(const char* l, int y, const int yr[], const int bot[]) : label(l), year_num(y), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)){};
        std::string& Label();
        int sum(){return PairArray::second().sum();}
        void GetBottles();
        void Show();
};
#endif