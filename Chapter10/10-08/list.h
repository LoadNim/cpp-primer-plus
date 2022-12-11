#ifndef LIST_H_
#define LIST_H_

typedef long long int Item;

class list{
    private:
        int size = 0;
        static const int MAX = 50;
        Item arr[MAX] = {0,};
    
    public:
        list();
        void append(int n);
        void empty() const;
        void full() const;
        void show_list() const;
        void visit(void (*pf)(Item&));
};
#endif