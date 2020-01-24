//
// Created by nicolasipr on 23/01/2020.
//

#include <iostream>

#include "repeated char.h"
#include "permutation.h"


using namespace std;

int main(){

    string str = "";
    cout << "Input your String to check" << endl;
    cin >> str;
    if( hasRepeatedChar(str) ){
        cout << "\n\nThe string \"" << str << "\" has repeated characters" << endl;
    }
    else{
        cout << "\n\nThe string \"" << str << "\" has none repeated characters" << endl;
    }

    string str1 = "",
            str2 = "";

    cout << "\n\nInput your First  String to compare" << endl;
    cin >> str1;
    cout << "\nInput your Second String to compare" << endl;
    cin >> str2;

    if( hasPermutation(str1, str2) ){
        cout << "\n\nThe string \"" << str1 << "\" & \""<< str2 <<"\" are permutation of each other " << endl;
    }
    else{
        cout << "\n\nThe string \"" << str1 << "\" & \""<< str2 <<"\" are not permutation of each other " << endl;
    }

    return 0;
}