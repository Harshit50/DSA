#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[100];
    int max_sum=0;
    int current_sum=0;
    int left = -1;
    int right = -1;


    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    //generating subarrays
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            //elements of subarrays(i,j)
            current_sum = 0;
            for(int k=i; k<=j; k++){
                current_sum += a[k];
            }

            //update maximum sum
            if (current_sum>max_sum){
                max_sum = current_sum;
                left=i;
                right=j;
            }            
        }
    }

    //print maximum sum
    cout<<"maximum sum is "<<max_sum<<endl;

    //printing the subarray
    for (int k=left; k<=right; k++){
        cout<<a[k]<<",";
    }
    

    return 0;
}