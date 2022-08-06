#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> d = {4,5,6,7,8};

    //push_back --> it enters the element at the end of the vector [O(1)]
    d.push_back(9);

    //pop_back --> it removes the last element [O(1)]
    d.pop_back();

    //Insert some element in the middle
    d.insert(d.begin()+2,2,100);

    //erase some element from the middle
    d.erase(d.begin()+2);
    d.erase(d.begin()+2, d.begin()+4);

    //size of vector
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //resize
    //this will increase the size of the vector but it doesn't effect the capacity 
    //the capacity will only increase if the resize is greater than the previous capacity

    d.resize(15);
    cout<<d.capacity()<<endl;

    //remove all the elements of the vector
    //it only clears the element of the vector , but the memory occupied will remain the same
    d.clear();    
    //cout<<d.capacity()<<endl;  --> remains same 15
    //cout<<d.size()<<endl; --> 0

    //empty function
    if(d.empty()){
        cout<<"empty vector"<<endl;
    }

    d.push_back(10);
    d.push_back(5);
    d.push_back(2);
    d.push_back(7);

    for(int x:d){
        cout<<x<<",";
    } 
    cout<<endl;

    //front most element
    cout<<"front most element --> "<<d.front()<<endl;
    
    //last element
    cout<<"last element --> "<<d.back()<<endl;

    //RESERVE FUNCTION
    //since using push back doubles the vector every time and requires more memory so to avoid it we use reserve function
    vector<int> v;
    int n;
    cin>>n;

    v.reserve(1000);
    for(int i=0; i<n; i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"current capacity --> "<<v.capacity()<<endl; 
    }
    cout<<"capacity --> "<<v.capacity()<<endl;

    for(int x:v){
        cout<<x<<",";
    }
    cout<<endl;

    return 0;
}