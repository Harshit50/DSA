#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

class car{
    public:
    string car_name;
    int x,y;
    car(){

    }
    car(string n , int x, int y){
        car_name = n;
        this->x = x;
        this->y = y;
    }
    int dist(){
        return x*x + y*y;
    }
};

bool compare(car A, car B){
    int da = A.dist();
    int db = B.dist();

    if(da==db){
        return A.car_name.length() < B.car_name.length();
    }
    return da < db;
}

int main(){
    int n;
    cin>>n;
    vector<car> v;

    for(int i=0; i<n; i++){
        int x,y;
        string name;
        cin>>name>>x>>y;
        car temp(name,x,y);
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compare);

    for(auto c:v){
        cout<<"car --> "<<c.car_name<<", dist --> "<<c.dist()<<", location -> "<<c.x<<","<<c.y<<endl;
    }

    return 0;
}