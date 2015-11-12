#include <iostream>
#include <cstdio>
#include <tuple>
using namespace std;

int main(){
    
    int weight[50], value[50];
    double valweight=0;
    
    while (weight!=-1 && value!=-1){
        
        cin>>weight>>value;
        valweight = (double)value/weight;
        cout<<"value is: " << valweight<<endl;
            
        
    }
    
    
    
    return 0;
}