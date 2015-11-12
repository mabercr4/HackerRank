#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int total(int a, int b){
    return a+b;
}

int main(){
    int num1, total=0;
    int cases;
    
    cin>>cases;
    
    for (int i=0; i<cases; i++){
        cin>>num1;
        total+=num1;
        
    }
    
    cout<<total<<endl;
    
    return 0;
}