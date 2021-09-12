// sort a given array using recursion

#include <bits/stdc++.h> 
using namespace std;



void my_sort(int arr[], int n)
{
    //base condition
    if(n <= 1){
        return;
    }

    int temp = arr[n - 1];
    //sort first n-1 elements
    my_sort(arr , n - 1);

    // place the last i.e (n-1)th element at correct position in sorted array.
    int last = arr[n - 1];
    int j = n - 2;
    while(j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;

}

int main()
{
    
    int arr[101];
    int n ;
    cin>>n;
    for(int i = 0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    my_sort(arr , n);
    for(int i = 0 ;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}