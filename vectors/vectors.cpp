#include<iostream>
#include<vector>
using namespace std;

int main(){

    //ways to define a vector
    vector<int> a;
    vector<int> b(5,10);  //it means this vector has give integers with value 10
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5};
    
    //iterate over the vector
    for(int i=0; i<c.size(); i++){
        cout<<c[i]<<",";
    }
    cout<<endl;

    for (auto it = b.begin(); it!=b.end(); it++){
        cout<<(*it)<<",";
    }
    cout<<endl;   

    //another way (for each loop)
    for(int x:d){
        cout<<x<<",";
    }
    cout<<endl;

    //push_back function
    vector<int> v;
    int n;
    cin>>n;
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

    //other functions
    /*cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;

    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;*/
    
    return 0;
}