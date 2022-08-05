#include<iostream>
using namespace std;

int * fun(){
    //int a[] = {1,2,3,4,5};  //static allocation

    int *a = new int[5];   //dynamic allocation
    a[0] = 11;
    a[1] = 12;
    cout<<a<<endl;
    cout<<a[0]<<endl;
    
    //we should never return a local variable
    return a;
}

int main(){
    int *b = fun();
    cout<<b<<endl;
    cout<<b[0]<<endl;

    //clear the array a
    delete []b;

    return 0;
}

/*while static allocation when the array is return in the function call, the values are erased from the memory but the address is 
passed by the function fun() to the main therefor the value of b will be same as a which is address of array and a[0] will return 
the 0th element of the array but since the memory is cleared using return so b[0] will not return the same value as a[0], 
it will return either 1, or some garbage value 

NOW, while using dynamic allocation the value of array is stored in the heap using the pointer so while we return in the function call 
it will pass on the values to the main function so the output in the main will be similiar to that in the function call */
