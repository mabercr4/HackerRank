#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;
bool isPrime(int n);
/*
    Future plans for this program: be able to calculate any and all possible
        prime numbers up to a given counter. 
        
    To do: 
        change "number" in main() to declare the counter
        create for loop until counter is satisfied to test incrementing integers
        either store numbers found into an array or simply throw them away until 
        counter prime number is found. 
            --may have to offset number found by 3 to satisfy exception cases for
                low integers such as 2, 3 etc.

*/

int main(int argc, char *argv[]){
    
    
    if (argc != 2){
        cout<<"Invalid number of command line arguments"<<endl;
        return 1;
    }
 
    int number = atoi(argv[1]);
    
    if (number == 0){
        cout<<"you want to find 0 primes??? --exiting program--"<<endl;
        return 1;
    }
    int integer=0;
    
    int counter = 0;
    
    cout<<"this program tests if a number entered is prime"<<endl;
    if (isPrime(number))
        cout<<"This number is prime!"<<endl;
    else
        cout<<"This number was not prime...."<<endl;
    
    cout<<"The number of primes you chose to find: " <<argv[1]<<endl;
    
    return 0;
}

bool isPrime(int n){
    if (n<=1)
        return false;
    else if (n<=3)
        return true;
    else if (n%2==0 || n%3==0)
        return false;
    int i = 5;
    while (i*i <= n){
        if (n%i==0 || n%(1+2)==0)
            return false;
        i=i+6;
    }
    return true;
}