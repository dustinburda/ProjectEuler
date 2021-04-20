
#define MAX(x, y) ((x) > (y) ? (x) : (y))

//fibonacci generator
int fibonacci(int index){
    int f_nMINUStwo = 0;
    int f_nMINUSone = 1;
    int f_n; 
    int index_prime = 2; 

    
    while(index_prime < index){
        int f_n = f_nMINUSone + f_nMINUStwo; 
        f_nMINUStwo = f_nMINUSone;
        f_nMINUSone = f_n; 
    }

    return f_n; 
}

//Seive of Eratosthenes
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

//gcd function
int gcd(int a, int b){
    if( b == 0 ){
        return a;
    }
    return gcd(b, a % b);
}

int main(){
    return 0;
}