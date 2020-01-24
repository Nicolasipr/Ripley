//
// Created by nicolasipr on 24/01/2020.
//
#include <iostream>
#include "LinkedList.h"

/*
 *  Assumptions:
 *  K-th term is equal or grater than zero,
 *  hence, the first list item has index equals to zero
 */

using namespace std;

LinkedList::LinkedList() {
    head == NULL;
    tail == NULL;

}
LinkedList::~LinkedList() {

}

void LinkedList::addNode(int n_data) {

    Node *node = new Node();
    node->data = n_data;
    node->next = NULL;

    if(!head){
        head = node;
        tail = node;
    }
    else{ // push back

        tail->next = node;
        tail = tail->next;
    }

}
int LinkedList::find(int k) {

    if(k < 0){
        cout << "Invalid k! nothing to find " << endl;
        return 0;
    }
    if( !head ){
        cout << "List is empty! nothing to find " << endl;
        return 0;
    }
    else{
        Node *aux = head;
        if(k == 0){
            return aux->data;
        }
        int i = 1;
        while ( aux->next ){

            if (k == i){
                return aux->data;
            }

            aux = aux->next;
            i++;

        }
    }
    return 0;

}

void LinkedList::displayList() {

    if (head == NULL) {
        cout << "List is empty! Nothing to show..." << endl;
    }
    else {

        Node* aux = head;

        while (aux->next) {
            cout << "| " << aux->data << " | -> ";
            aux = aux->next;
        }
        cout << " NULL" << endl;
    }

}

void LinkedList::findAndDelete(int k) {

    cout << "\n\n Finding " << k << "-th element on Linked List:  " << find(k) << endl;

    cout << "\n\n Deleting " << k << "-th element on Linked List:  " << endl;
    remove(k);

}

void LinkedList::remove(int k){

    if(k < 1){
        cout << "Invalid k! nothing to remove " << endl;
        return ;
    }

    if( !head ){
        cout << "List is empty! nothing to remove " << endl;
    }
    else{

        Node *current = head,
              *following,
              *before = head;

        if(k == 1){
            if(!current->next){
                head = NULL;
                tail = NULL;
                delete(current);
                return ;
            }
            else {
                following = current-> next;
                head = following;
                delete(current);
                return ;
            }

        }
        int i = 1;
        while ( current->next ){

            if (k == i){
                following = current->next;
                before->next = following;
                delete(current);
                return ;

            }
            before = current;
            current = current->next;
            i++;

        }
    }

}
