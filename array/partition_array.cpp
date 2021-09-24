#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; cin>>n;
    int a[n];
	for(int i = 0 ;i<n;i++){
	    cin>>a[i];
	}
    /*int a[] = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    int n = sizeof(a) /sizeof(a[0]);*/
    //two pointer approach.
    int left = 0 ;
    int right = n - 1;
    while(left <= right){
        //if both a[left] and a[right] are negative
        if(a[left] < 0 && a[right] < 0){
            left += 1;
        }
        //if a[left] is positive and a[right] is negative
        else if( a[left] > 0 && a[right] < 0){
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            left+=1;
            right-=1;
        }
        //if a[left] is positive and a[right] is also positive
        else if( a[left] > 0 && a[right] > 0){
            right-=1;
        }
        else{
           left+=1;
           right-=1;
        }
        
    }
    for(int i = 0 ;i <= n - 1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    
    
	
	return 0;
}