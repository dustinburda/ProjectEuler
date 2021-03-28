/* 
Our triangel must take the form x,x,x-1 or x,x,x+1.
Dropping a height down to the side x-1 or x+1 yields a height of 
sqrt(3x^2+2x-1)/2 and sqrt(3x^2-2x-1)/2 respectively.
This yields a total area of ((x-1)/2)*(sqrt(3x^2+2x-1)/2) and ((x+1)/2)*(sqrt(3x^2-2x-1)/2).
We need the number under the sqrt to be a perfect square, so equate 3x^2+2x-1 = k^2 and 
3x^2-2x-1 = k^2. Solving for x yields (1+sqrt(4+3k^2))/3 and (-1+sqrt(4+3k^2))/3. We reject
the solution with a negative sqrt because they yields a negative side length of x. 
Since x is an integer, we require 4+3k^2 to be a perfect square, hence 4+3k^2 = n^2.
Rearranging yields n^2 - 3k^2 = 4, which is a Pell's Equation. Solving this will yields recursive 
solutions for k, which can be plugged into check that (1+sqrt(4+3k^2))/3 and (-1+sqrt(4+3k^2))/3 
are integers and then further checking if ((x-1)/2)*(sqrt(3x^2+2x-1)/2) and ((x+1)/2)*(sqrt(3x^2-2x-1)/2)
are integers. 


*/

int main(){
    return 0;
}