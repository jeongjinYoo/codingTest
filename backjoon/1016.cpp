#include <iostream>
#include <stdlib.h>
#include <vector>

#define MIN_LIMITE 1000000000000
#define ADD_TO_MIN_LIMITE 1000000

using namespace std;

int main(){
    int range, count = 0;
    long long unsigned min, max, square = 0;

    cin >> min >> max;

    if((min <= 0 || min > MIN_LIMITE) || (max < min || max > min + ADD_TO_MIN_LIMITE)){
        fprintf(stderr, "err: over range\n");
        return 0;
    }

    range = max - min + 1;
    char check[range];
    for(int i = 0; i<range; i++) check[i] = 0;

    long long value;

    for (long long j = 2; j*j <= max; j++) {
        square = j*j;
        long long start = ((min + square - 1) / square) * square;
    
        for (value = start; value <= max; value += square) {
            check[value - min] = 1;
        }
    }

    for(int i = 0; i<range; i++){
        if(check[i] == 0) count++;
    }
    cout << count;

    return 0;
}