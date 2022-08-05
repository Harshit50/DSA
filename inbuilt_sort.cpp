#include<iostream>
#include<algorithm>
using namespace std;

// define a comparator fuction
bool compare(int a, int b){
    cout<<"comparing "<<a<<" and "<<b<<endl;
    return a > b;
}

int main(){

    int n,key;
    cin>>n;

    int a[100];
    for(int i=0; i<=n-1; i++){
        cin>>a[i];
    }
    //using inbuilt sort function for efficiency
    sort(a, a+n, compare);

    for (int i = 0; i <= n-1; i++){
        cout<<a[i]<<",";
    }
    return 0 ;
}