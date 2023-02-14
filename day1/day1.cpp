#include <iostream>
using namespace std;
int i, j, n;
int main(){
    int i, j, n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
