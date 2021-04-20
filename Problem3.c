#include <stdio.h>
#include<stdlib.h>
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
    long num = 600851475143;
    int limit = (int)floor(sqrt(num));
    int *primes = seive(limit);
    
    int max_prime_factor = 1; 
    for(int i = 0; i <limit + 1; i++){
        if( (primes[i] == 1) && (num%i == 0)){
            max_prime_factor = i; 
        }
    }
    free(primes);
    printf("The answer is: %d\n", max_prime_factor);
    return 0; 
}