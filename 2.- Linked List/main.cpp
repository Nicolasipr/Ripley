//
// Created by nicolasipr on 24/01/2020.
//
#include <iostream>

#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main() {

    LinkedList Simple;

    int N; cin >> N;
    for (int i = 0; i <= N; i++) {
        Simple.addNode(i);
    }
    Simple.displayList();

    int k; cin >> k;
    Simple.findAndDelete(k);

    Simple.displayList();
    return 0;
}