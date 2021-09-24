/*Question_link : https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0 */

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        //used count sort.
        int count[4];
        for(int i = 0 ; i<4;i++){
            count[i] = 0;
        }
        for(int i = 0; i<n ; i++){
            count[a[i]]++;
        }
        int k = 0;
        for(int i = 0 ;i<4;i++){
            for(int j = 0 ; j<count[i];j++){
                a[k] = i;
                k++;
            }
        }
        
        
        
    }
    
};


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}