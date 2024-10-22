//
// Created by nicolasipr on 24/01/2020.
//

#ifndef RIPLEY_LINKEDLIST_H
#define RIPLEY_LINKEDLIST_H

#include "Node.h"

class LinkedList {
private:
    Node *head, *tail;

public:
    LinkedList();
    ~LinkedList();

    // CRUD
    void addNode(int n_data);
    int find(int k);
    void displayList();
    void remove(int k);
    void findAndDelete(int k);


};


#endif //RIPLEY_LINKEDLIST_H
