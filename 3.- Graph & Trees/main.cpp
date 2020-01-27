//
// Created by nicolasipr on 24/01/2020.
//

#include <iostream>
#include <bitset>
#include <queue>

#define MAX 128

using namespace std;

int graph[4][4] = {{0, 1, 0, 0},
                   {0, 0, 1, 0},
                   {1, 0, 0, 0},
                   {0, 0, 1, 0}};



bool BFS(int A, int B){

    if(A==B) // if both nodes are equal, they are already connected
        return true;

    bitset<MAX> visited;
    queue<int> path;

    path.push(A); // add A node to path
    visited[A] = 1; // and marked as visited

    while( !path.empty() ){

        int i = path.front(); // starts with the first adjacent node on the queue
        path.pop(); // once it has been setted,

        for(int j = 0; j < 4; j++){

            if( graph[i][j] ){ // if has an adjacent node

                if( !visited[j] ){ // if not visited yet
                    if(j == B){ // When found node
                        return true;
                    }
                    else{
                        visited[j] = 1;
                        path.push(j);
                    }
                }
            }
        }
    }

    return false;
}


int main() {



    cout << "\n\n\t\tGraph\n" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }

    int A;
    cout << "\n\nInput A Node: " ;
    cin >> A;

    int B;
    cout << "Input B Node: " ;
    cin >> B;

    cout << "Are Node \"" << A << "\" and node \"" << B << "\" connected? " << endl;
    if( BFS(A,B) )
        cout << "R: Yes" << endl;
    else
        cout << "R: No" << endl;

    cout << "Are Node \"" << B << "\" and node \"" << A << "\" connected? " << endl;
    if( BFS(B,A) )
        cout << "R: Yes" << endl;
    else
        cout << "R: No" << endl;

    return 0;
}