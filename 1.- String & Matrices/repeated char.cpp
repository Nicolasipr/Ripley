//
// Created by nicolasipr on 23/01/2020.
//
// Libraries
#include <iostream>
#include <cstring>

// contained files
#include "repeated char.h"

using  namespace std;

/*
 *  This algorithm works for A to Z eng based alphabet
 *  That's the assumption
 */

bool hasRepeatedChar(string str){
    int alphabet = 0; // ABC 32 bit bitmask for 26 charset

    if(!str.length()){
        return false; // null has no repeated chars
    }
    else{
        int current = 0;
        for( long unsigned int i = 0; i < str.length(); i++ ){ // o(N)
            current = (str[i] - 'a');

            if ( (alphabet & (1 << current)) )// if char exist already in the current alphabet
                return true;
            else
                alphabet |= (1 << current);
        }
        return false; // has no repeated characters
    }
}