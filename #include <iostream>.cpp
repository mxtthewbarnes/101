#include <iostream> 

using namespace std; 

int fibo(int n)
{
    if(n==0)   
        return 0; 
    if(n==1)
        return 1; 
    return fibo(n-1) + fib(n-2);  
}



int main() 
{
    int n = 10; 
    cout << fibo(n) << endl; 

    return 0; 
}