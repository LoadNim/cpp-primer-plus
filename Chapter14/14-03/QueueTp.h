#ifndef QUEUETP_H_
#define QUEUETP_H_
#include "workermi.h"
#include <iostream>

template <typename type>
class Queue{
    private:
        struct node{type data; node* next = nullptr;};
        int q_size = 0;
        node* head = nullptr;
        node* rear = head;
    public:
        Queue(){}
        void push(type& input);
        void pop();
};

template <typename type>
void Queue<type>::push(type& input){
    if(!q_size){
        head->data = input;
    }
    else{
        node* newnode = new node;
        newnode->data = input;
        rear->next = newnode;
    }
    ++q_size;
}

template <typename type>
void Queue<type>::pop(){
    if(q_size && q_size != 1){
        head->data->Show();
        std::cout<<"\n의 정보를 삭제합니다.\n";
        node* temp = head;
        head = head->next;
        delete temp;
        --q_size;
    }
    else if(q_size == 1){
        head->data->Show();
        std::cout<<"\n의 정보를 삭제합니다.\n";
        head->data = nullptr;
        head = nullptr;
        rear = head;
        --q_size;
    }
    else{
        std::cout<<"큐가 비었습니다"<<std::endl;
    }
}

#endif