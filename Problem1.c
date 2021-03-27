#include <stdio.h>
#include <math.h>

void count(int n, int *running_count){
    *running_count = 0; 
    for(int i = 1; i < n; i++){
        if( (i % 3 == 0) || (i % 5 == 0)){
            *running_count += i;
        }
    } 
    return; 
}

int main(){
    int running_count; 
    count(1000, &running_count); 
    printf("%d\n", running_count); 

    return 0; 
}