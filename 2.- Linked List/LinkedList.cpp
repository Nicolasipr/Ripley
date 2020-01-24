//
// Created by nicolasipr on 24/01/2020.
//
#include <iostream>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList() {
    // constructor
}
LinkedList::~LinkedList() {
    // destructor
}

void LinkedList::addNode(int n_data) {
    Node *node =  new Node();
    node->data = n_data;
    node->next = NULL;

    if( head ){
        head = node;
    }
    else{
        Node *aux = head;
        while ( aux->next ){
            aux = aux->next;
        }
        aux->next = node;
    }

}
int LinkedList::find(int k) {

    if( head ){
        cout << "List is empty! " << endl;
    }
    else{

    }

}
void LinkedList::findAndDelete(int k) {

}
void LinkedList::remove(int k){

}
