#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    int largest = INT_MIN;
    int smallest = INT_MAX;

    /*for(int i=0; i<n; i++){
        if(a[i]>largest){
            largest = a[i];
        }
        if(a[i]<smallest){
            smallest = a[i];
        }
        
    }*/

    for(int i=0; i<n; i++){
            largest=max(largest,a[i]);
            smallest=min(smallest,a[i]);
    }
    
    cout<<"largest no "<<largest<<endl;
    cout<<"smallest no "<<smallest<< endl;
    return 0;
}