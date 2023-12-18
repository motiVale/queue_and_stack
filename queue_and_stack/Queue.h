#pragma once
#include <iostream>
#include <random>
using namespace std;
struct Node {
    int val;//Время ожидания назвал "val" для удобства
    Node* next;
    Node* prev;
    Node(int _val) : val(_val), next(nullptr), prev(nullptr) {  };
    /* Node(const int& val, Node* prev, Node* next)
         : val(val), next(next), prev(prev){}*/
    ~Node() {
        delete[] next;
        delete[] prev;
    }

};
class Queue
{
private:
    Node* first;
    Node* last;
    unsigned int size = 0;
    unsigned int update_size();
public:
    Queue() : first{ nullptr }, last{ nullptr } {}
    ~Queue() {
        delete[] first;
        delete[] last;
    }
    explicit Queue(unsigned int _size) : size{ _size } {
        for (unsigned int i = 0; i < size; ++i) {
            append(0 + rand() % 100);
        }
    }
    void append(int _val);
    void push_begin(int _val);
    void insert(int _val, const int index);
    void remove_first();
    void remove_last();
    void remove_index(int index);
    void print()const;
    Node* find(int _val);    
};