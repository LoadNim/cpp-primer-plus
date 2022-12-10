#ifndef STACK_H_
#define STACK_H_

struct customer{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack{
    private:
        Item cus_arr[50];
        int cus_num;
        double revenue;
    
    public:
        Stack();
        void add_customer();
        void del_customer();
};

#endif