#include <iostream>
#include <cstdio>
#include <stdlib.h>

using namespace std;
bool isPrime(int n);

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
    //find prime numbers!!!!
    // for (int i=0; i<number; i++){
    //     while (counter != number){  //while the number of primes specified has not been found, continue on.
    //                                 //the only thing I can think of is to do a massive multiplication table up to half the value of the number you're currently looking at and then 
    //                                 //searching this array of numbers to see if there are any blank spaces in between the products.
    //                                 //blank spaces will indicate that nothing multiplied will produce a product of these numbers and therefore verify that they are prime.
    //                                 //this is a very inefficient way of calculating primes though ---roughly n^2 I think . 
    //         if (integer )
            
            
    //         counter++
    //     }
        
    // }
    
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