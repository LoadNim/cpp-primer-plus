#ifndef QUEUETP_H_
#define QUEUETP_H_
#include <iostream>

template <typename T>
class Queue{
    private:
        struct Node{T data = nullptr; Node* next = nullptr;};
        Node* head;
        Node* rear = head;
        int q_size = 0;
    
    public:
        Queue(){}
        void push(T& input);
        T pop();
        T set_head(){return head->data;}
        bool empty();
};

template <typename T>
void Queue<T>::push(T& input){
    if(!q_size) head->data = input;
    else{
        Node* newnode = new Node;
        newnode->data = input;
        rear->next = newnode;
        rear = newnode;
    }
    ++q_size;
}

template <typename T>
T Queue<T>::pop(){
    if(q_size == 1){
        --q_size;
        return nullptr;
    }
    else{
        Node* temp = head;
        head = head->next;
        delete temp;
        --q_size;
        return head->data;
    }
}

template <typename T>
bool Queue<T>::empty(){
    if(q_size) return false;
    else return true;
}

#endif