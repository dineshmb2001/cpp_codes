#include <iostream>
using namespace std;
int main(){
    int i=1, j, k, n, val=1;
    cout<<"Enter no. of rows: ";
    cin>>n;
    while (i<=n)
    {
        k=1;
        while(k<=n-i){
            cout<<" ";
            k++;
        }
        j=1;
        while (j<=i)
        {
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;
        
    }
    
}