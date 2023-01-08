#ifndef PERSON_H_
#define PERSON_H_
#include <string>
#include <ctime>

class Person{
    private:
        std::string first_name;
        std::string last_name;
    
    public:
        Person() : first_name("no"), last_name("name"){}
        Person(const char* f, const char* l) : first_name(f), last_name(l){}
        Person(Person& p) : first_name(p.first_name), last_name(p.last_name){}
        void show() const;
};

class Gunslinger : virtual public Person{
    private:
        int notch;
        double time;

    public:
        Gunslinger() : Person(), notch(0), time(0.0){}
        Gunslinger(Person& p, int n = 1, double t = 5.0) : Person(p), notch(n), time(t){}
        Gunslinger(Gunslinger& g) : Person(g), notch(g.notch), time(g.time){}
        double draw() const {return time;}
        void show() const;
};

class PokerPlayer : virtual public Person{
    public:
        PokerPlayer() : Person(){}
        PokerPlayer(Person& p) : Person(p){}
        PokerPlayer(PokerPlayer& p) : Person(p){}
        int draw() const {return(rand() % 52 + 1);}
};

class BadDude : public Gunslinger, public PokerPlayer{
    public:
        BadDude() : Person(), Gunslinger(), PokerPlayer(){}
        BadDude(Person& p) : Person(p), Gunslinger(p), PokerPlayer(p){}
        BadDude(Gunslinger& g) : Person(g), Gunslinger(g), PokerPlayer(g){}
        BadDude(PokerPlayer& p) : Person(p), Gunslinger(p), PokerPlayer(p){}
        double gdraw(){return Gunslinger::draw();}
        int cdraw(){return PokerPlayer::draw();}
        void show();
};
#endif