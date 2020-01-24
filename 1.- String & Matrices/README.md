# String and Matrices

## Problem A
"Implemente un algoritmo que determine si un string no tiene caracteres
 repetidos. Por ejemplo: la palabra CASA no cumple con la condición ya que tiene
 dos As, la palabra ÁRBOL cumple con la condición puesto todos sus caracteres
 son únicos dentro del string."
 
 In Order to complete this task, our implementation used bitmask under bitwise operation in under to check 
 if each character used in the string has already been read.
 
 
```cpp

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
```

## Problem B
"Implemente método que decida si un string es una permutación de otro string"

In Order to compete this task, our implementation had the following assumptions:

 1) If both strings are equal means that they are not permutations of themselves
 2) If they do not have the same length,  both are different words
 3) We're assuming that string are not the same char all along, e.g "aaaaaa" vs "aaaaaa"
 4) If both strings  are the same unordered word, means that when sorted, they have to have the same char alignment

```cpp

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

```