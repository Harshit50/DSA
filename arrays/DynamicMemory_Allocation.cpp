#include<iostream>
using namespace std;

int main(){

    //static allocation --> in this the allocation and deletion is done by the compiler itself
    int b[100];
    cout<<sizeof(b)<<endl;  //400

    //dynamic allocation 
    int n;
    cin>>n;
    int *a = new int[n];  //allocation 
    cout<<sizeof(a)<<endl;

    for(int i=0; i<n; i++){
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    
    //deletion 
    delete[] a;

    return 0;
}