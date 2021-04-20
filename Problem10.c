#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* seive(int n){
    int i, j;
    int* seive_array = (int *)malloc(sizeof(int)*(n+1));  
    for(seive_array[1] = 0, i =2; i <=n; i++){
        seive_array[i] = 1; 
    }
    for(i = 2; i <= n/2; i++){
        for(j = 2; j <= n/i; j++){
            seive_array[i*j] = 0; 
        }
    }
    return seive_array; 
}




int main(){
    int limit = 2000000;
    int* primes = seive(limit);

    long running_sum = 0;
    for(int i = 0; i < limit + 1; i++){
        if(primes[i] == 1){
            running_sum += i; 
        }
    }
    printf("%ld\n", running_sum);
    return 0;
}