#include "Queue.h"

unsigned int Queue::update_size()
{
    unsigned int size = 0;
    Node* p = first;
    while (p) {
        size += 1;
        p = p->next;
    }
    return size;
}

void Queue::append(int _val)
{
    if (Queue::size != 0) {
        Node* p = new Node(_val);
        Node* l = last;
        last->next = p;
        last = p;
        p->prev = l;
        Queue::size++;
        return;
    }
    else if (Queue::size == 0)
    {
        Node* p = new Node(_val);
        first = p;
        last = p;
        Queue::size++;
        return;
    }
    else if (last == first)
    {
        Node* p = new Node(_val);
        last = p;
        first->next = p;
        p->prev = first;
        Queue::size++;
        return;
    }
}

void Queue::push_begin(int _val)
{
    if (Queue::size == 0) {
        Node* p = new Node(_val);
        first = p;
        last = p;
        Queue::size++;
        return;
    }
    if (first == last) {
        Node* p = new Node(_val);
        first = p;
        last->prev = p;
        p->next = last;
        Queue::size++;
        return;
    }
    Node* p = new Node(_val);
    Node* f = first;
    first->prev = p;
    first = p;
    p->next = f;
    Queue::size++;
}

void Queue::insert(int _val, const int index)
{
    if (Queue::size == 0) {
        Queue::append(_val);
        return;
    }
    Node* p = new Node(_val);
    Node* node = first;
    for (unsigned int i = 0; i < index; i++)
        node = node->next;
    Node* temp = node->next;
    node->next = p;
    p->next = temp;
    p->prev = node;
    Queue::size++;
}

void Queue::remove_first()
{
    if (Queue::Queue::size ==0) {
        return;
    }
    Node* p = first;
    first = p->next;
    if (first) {
        first->prev = nullptr;

    }
    else {
        last = nullptr;
    }
    delete p;
    Queue::size--;
}

void Queue::remove_last()
{
    if (size==0) {
        return;
    }
    Node* p = last;
    last = p->prev;
    if (last)
    {
        last->next = nullptr;
    }
    else {
        first = nullptr;
    }
    delete p;
    Queue::size--;
}

void Queue::remove_index(int index)
{
    if (size==0 || index < 0) {
        return;

    }
    if (first == last || index == 0) {
        remove_first();
        size--;
        return;
    }
    Node* node = first;
    for (unsigned int i = 0; i < index; i++)
        node = node->next;
    if (node->next == last) {
        remove_last();
        return;
    }
    Node* temp = node->next;
    node->next = temp->next;
    node->prev = temp->prev;
    delete temp;
    size--;

}

void Queue::print()const
{
    if (Queue::size==0) {
        cout << endl << "Список пуст" << endl;
        return;
    }
    cout << endl;
    Node* p = first;
    while (p) {
        cout << p->val << " ";
        p = p->next;
    }
}

Node* Queue::find(int _val)
{
    if () {
        cout << endl << "Список пуст" << endl;
        return nullptr;
    }
    Node* p = first;
    while (p && p->val != _val) p = p->next;
    return p ? p : nullptr;
}
