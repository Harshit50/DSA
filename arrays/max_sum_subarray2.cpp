#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[100];
    int cum_sum[1000]={0};
    int max_sum=0;
    int current_sum=0;
    int left = -1;
    int right = -1;

    cin>>a[0];
    cum_sum[0] = a[0];
    for(int i=1; i<n; i++){
        cin>>a[i];
        cum_sum[i] = cum_sum[i-1] + a[i];
    }
    
    //generating subarrays
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){

            //elements of subarrays(i,j)
            current_sum = 0;

            current_sum = cum_sum[j] - cum_sum[i-1];      

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