//PASSES ALL TEST CASES, Including when n >= 10^9
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int cases;
    cin>>cases;
        
    long int total = 0;
    
    
    for (int i=0; i<cases; i++){
        total = 0;
        long int n;
        cin>>n; 
        
        long int count3=0, count5=0, count15=0;
        //set counters
        count3=(n-1)/3; count5=(n-1)/5; count15=(n-1)/15;
        
        //factorial summation --what is this called?? (n^2+1)/2
        if (count3>0) total+=(((count3*count3)+count3)/2)*3;
        if (count5>0) total+=(((count5*count5)+count5)/2)*5;
        if (count15>0) total-=(((count15*count15)+count15)/2)*15;
        
        cout<<total<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    return 0;
}