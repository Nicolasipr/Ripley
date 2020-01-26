# String and Matrices

## Problem A
"Un niño está corriendo en una escalera de N peldaños y puede saltar de 1 peldaño, 2 peldaños o 3
 peldaños. Implemente un método que cuente cuántas combinaciones posibles de saltos puede realizar en niño 
 en la escalera."
 
 One of the strategies to solve this problem was to understand What factors do change and get updated.
 In our case, the number of steps N decrease whenever our subjects gives a step. And Our quantity of combination C
 gets updated whenever our number of selected steps reach 0. 
 
 Also, we have made the following assumption:
 1. For every combinations c_i of step s_i there's at least c_i-1 combinations for the current step
 
 We have decided to implement our algorithm using Dynamic Programming using memoization, because we have the conditions
 that C and N gets updated for each step S, so we have to optimize our code by using precomputed data.
 
      
```cpp
#define ulli unsigned long long int
#define MAX 1000

using namespace std;

vector<ulli> Steps(MAX, 0);

int ladderSteps(int N){

    if(N == 0) // Base case: when
        return 1;
    else if(N < 0) // Prevent overflow
        return 0;
    else{
        if(Steps[N]){ // if path already exists, return it and use it.
            return Steps[N];
        }
        else{ // sums all steps that ends with zero steps ahead.
            return (Steps[N] = ladderSteps(N-1) + ladderSteps(N-2) + ladderSteps(N-3) );
        }
    }

}
```

And by using memoization, we've changed our time complexity from o(3^n) to O(N). 

## Problem B
"Explique qué entiende por complejidad de un algoritmo. ¿Qué significa O(N2)?"

Algorithm complexity is related to how much time does it take to do some task. For instance, all IO  operations 
have time complexity of O (1) or constant (theoretically), so if a code does N IO operations, 
It's going to take time N to perform that task, hence it's O (N)