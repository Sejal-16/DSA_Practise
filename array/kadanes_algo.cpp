/*problem_statement : https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int kadane(int arr[] , int n){
        // Your code here
        // max for storing the maximum sum
        long long int max_sum = arr[0];
        // sum for storing the sum
        long long int sum = arr[0];
        for(long long int i = 1 ; i<n;i++){
           if(arr[i] > (sum + arr[i])){
               sum = arr[i];
           }else{
               sum += arr[i];
           }
           max_sum = max(sum , max_sum);
            
        }
        return max_sum;
    }
};

int main(){
    int t ; cin>>t;
    while(t--){
        int n ; cin>>n;
        int arr[n];
        for(int i = 0 ;i<n;i++){
            cin>>arr[i];
        }
        Solution obj;
        cout<<obj.kadane(arr,n)<<endl;
        
        
    }
    return 0;
}