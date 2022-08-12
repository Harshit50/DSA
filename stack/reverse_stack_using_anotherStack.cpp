#include<iostream>
#include<stack>
using namespace std;

void transfer(stack<int> &s1, stack<int> &s2, int n){

    for(int i=0;i<n;i++){
        s2.push(s1.top());
        s1.pop();
    }    
}

void reversestack(stack<int> &s1){
    //using another stack as helper stack
    stack<int> s2;

    int n = s1.size();

    for(int i=0; i<n; i++){
        
        //pick element from top and insert at bottom of another stack
        int x = s1.top();
        s1.pop();
        
        //transfer n-1-i elements from s1 to s2
        transfer(s1,s2,n-1-i);
        
        //insert the element x in s1
        s1.push(x);
        
        //transfer n-1-i elements from s2 to s1
        transfer(s2,s1,n-1-i);
    }
}

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reversestack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
} 