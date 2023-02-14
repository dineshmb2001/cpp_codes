#include<iostream>
using namespace std;
int main(){
    int x, n, pow=1, i=1;
    cout<<"Enter values of x and n: ";
    cin>>x>>n;
    
    while(i<=n){
        pow=x*pow;
        i++;
    }
    cout<<"Power is "<<pow;



}