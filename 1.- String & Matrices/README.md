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