# 2. Linked List

## Problem A
"Escriba en su lenguaje favorito una clase Nodo, que represente una lista ligada simple."

 
That's a simple Node class implementation.  
```cpp
class Node {

public:
    int data;
    Node *next;
    Node();
    ~Node();
};
```

## Problem B
"Implemente un algoritmo que retorne y elimine de la lista el enésimo elemento de una lista ligada simple."

In order to Implement or Linked List Task, we've decided that it's easier to handle this with OOP Linked List class
that can handle multiple nodes. 

```cpp
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

```

So we created this method in order to find an return data from the k-th term on this linked list.

```cpp
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
```
Then we created a remove method. 

```cpp
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

```

And finally we merge both methods in one single of them.

```cpp
void LinkedList::findAndDelete(int k) {

    cout << "\n\n Finding " << k << "-th element on Linked List:  " << find(k) << endl;

    cout << "\n\n Deleting " << k << "-th element on Linked List:  " << endl;
    remove(k);

}

```

