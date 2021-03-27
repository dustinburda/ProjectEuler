#include <stdio.h>
#include <math.h> 


int main(){
    //starting values
    int f_nMINUStwo = 1;
    int f_nMINUSone = 2; 
    
    //recurrence relation
    int f_n = f_nMINUSone + f_nMINUStwo; 
    
    //index
    int n = 3; 

    int running_sum = 2; 
    int limit = 4000000;

    while(f_n < limit){
        //every 4th number starting from the second is even
        if(n % 3 == 2){
            running_sum += f_n; 
        }
        n += 1;
        f_nMINUStwo = f_nMINUSone; 
        f_nMINUSone = f_n; 
        f_n = f_nMINUSone + f_nMINUStwo; 
    }

    
    printf("%d\n", running_sum);
    return running_sum;
}