//
// Created by nicolasipr on 24/01/2020.
//
#include <iostream>

#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList Simple;

    int N;
    cout << "\nHow many Nodes do you want?" << endl;
    cin >> N;
    if(N < 0){
        cout << "Cannot add a negative sum of nodes..." << endl;
        return 0;
    }
    else{

        for (int i = 0; i <= N; i++) {
            Simple.addNode(i);
        }

        Simple.displayList();

        int k;
        cout << "What k-th element do you want to find and Remove? " << endl;
        cin >> k;

        if(k <= 0){
            cout << "Cannot find nor remove a non-positive k-th position under our Linked List" << endl;
            return 0;
        }
        else{
            Simple.findAndDelete(k);
            Simple.displayList();
        }
    }

    return 0;
}