#include <stdio.h>
#include <math.h> 
#include <stdbool.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int gcd(int a, int b){
    if( b == 0 ){
        return a;
    }
    return gcd(b, a % b);
}

/*
A fraction is terminating iff its denominator, after reducing for the greatest common factor
is only divisible by powers of 2 or 5. We continously divide our number 2 or 5. If this is not 
possible at some point and our number is still greater than 1, then it must be divisible by something else. 
*/
bool is_terminating(int n, int k){
    
    int common_factor = gcd(n, k);
    int reduced_denom = k/common_factor;

    while(reduced_denom > 1){
        if(reduced_denom % 2 == 0){
            reduced_denom = reduced_denom/2;
            continue; 
        }
        if(reduced_denom % 5 == 0){
            reduced_denom = reduced_denom/5;
            continue;
        }
        return false; 
    }
    return true; 
}

/*
Differentiating (N/k)^k with respect to k yields k = N/e.
We round N/e to the nearest integer to get the right number of parts to split into.
We then check if N/[round N/e] is a terminating decimal.
*/
int D_N(int n){
    int k = round(n/(M_E)); 
    if(is_terminating(n, k)){
        return (-1)*(n);
    }
    
    return n; 
}


int main(){
    int limit = 10000;
    int running_sum = 0;
    for(int i = 5; i < limit + 1; i++){
        running_sum += D_N(i);
    }
    printf("%d\n", running_sum);
    return 0; 
}