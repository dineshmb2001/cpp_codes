#include<iostream>
using namespace std;
int main(){
    int i, j, n;
    cout<<"Enter no. of rows: ";
    cin>>n;
    i=1;
    int val=1;
    while(i<=n){
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