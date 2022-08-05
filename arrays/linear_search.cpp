#include <iostream>
using namespace std;
int main(){
    //taking input of the number of elements and key to be searched
    int n,key;
    cin>>n;

    int a[100];
    //inputing the values for the array 
    int i;
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"enter the element you want to search"<<endl;
    cin>>key;

    //loop for searching of the key
    for(i=0; i<=n; i++){
        if(a[i]==key){
            cout<<key<<" element found at index "<<i<<endl;
            break;
        }
    }
    if(i==n){
        cout<<key<<" not found in the array"<<endl;
    }
    return 0;
}