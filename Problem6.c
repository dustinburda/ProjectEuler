#include <stdio.h>
#include <math.h> 


int sum_of_squares(int limit){
    return ((limit)*(limit +1)*(2*limit + 1))/6; 
}

int sum_of_nums(int limit){
    return ((limit)*(limit + 1))/2;
}

int main(){
    int solution = (sum_of_nums(100))*(sum_of_nums(100)) - sum_of_squares(100); 
    printf("%d\n", solution); 
    return solution;
}