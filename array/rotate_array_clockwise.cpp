/*Question_link : https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1*/
#include<bits/stdc++.h>
using namespace std;

void rotate_clockwise(int arr[] , int n){
    int temp ;
    temp = arr[n-1];
    for(int i = n-1 ; i>0;i--){
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}



int main(){
    int t ; cin>>t;
    while(t--){
        int n ; cin>>n;
        int arr[n];
        for(int i = 0 ;i<n;i++){
            cin>>arr[i];
        }
        rotate_clockwise(arr,n);
        for(int i = 0 ;i<n;i++){
            cout<<arr[i];
        }

    }
    return 0;
}