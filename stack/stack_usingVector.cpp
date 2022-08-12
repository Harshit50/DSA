#include<iostream>
#include<vector>
using namespace std;

//Implementing stack using vectors

template<typename T, typename V> //can also make stack with 2 datatypes , just need to define 2 typename
class stack{
private:
    vector<T> v;
    vector<V> v2;

public:
    void push(T data){
        v.push_back(data);
    }

    bool empty(){
        return v.size()==0;
    }

    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }
    
    T top(){
        return v[v.size()-1];
    }
};

int main(){
    stack<char,int> s;
    //int n;
    //cin>>n;

    for(int i=65;i<=70;i++){
        s.push(i);       
    }

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }


    return 0;
}