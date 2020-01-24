//
// Created by nicolasipr on 24/01/2020.
//
#include <iostream>
#include <cstring>
#include <algorithm>

#include "permutation.h"

using namespace std;

/*
 *  Assumptions:
 *      1) If both strings are equal means that they are not
 *          permutations of themselves
 *      2) If they do not have the same length,  both are different words
 *      3) We're assuming that string are not the same char all along,
 *          e.g "aaaaaa" vs "aaaaaa"
 *      4) If both strings  are the same unordered word, means that
 *          when sorted, they have to have the same char alignment
 *
 */

bool hasPermutation(string str1, string str2){

    if (!str1.compare(str2)){// first and third assumption

        return false;
    }
    else if (str1.length() != str2.length()){ // second assumption
        return false;
    }
    else{ // fourth assumption

        sort(str1.begin(), str1.end()); // o( N * log_2 (N) )
        sort(str2.begin(), str2.end());

        if(str1.compare(str2))
            return false;
    }
    return true;
}