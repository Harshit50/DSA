#include <iostream>
using namespace std;
int main(){
    //initializing an array
    int a[10]={0};

    //size of array
    cout<<"size of array is "<<sizeof(a)<<endl;
    int n = sizeof(a)/sizeof(int);  //to find the number of elements/buckets in an array
    cout<<"no. of elements is "<<n<<endl;

    //input elements in an array
    for(int i=0; i<5; i++){
        cin>>a[i];
    }

    //update a single element in array
    a[8]=100;

    cout<<"array is "<<endl;
    //print all elemnets of an array
    for(int i=0; i<10; i++){
        cout<<a[i]<<",";

    }
    return 0;

}