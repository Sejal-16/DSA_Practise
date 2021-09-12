//delete middle element in stack

#include<bits/stdc++.h>
using namespace std;

void del_mid(stack<int>&s , int k){
    // base condition , as we are decreasing size of stack , least valid val of k is 1 , as from top if we have to delete the topmost elm itself
    if(k == 1){
        s.pop();
        return;
    }
    // pop out the topmost elm
    int temp = s.top();
    s.pop();
    // delete the mid elm 
    del_mid(s , k - 1);
    //push the popped elm.
    s.push(temp);
}

int main(){
    stack<int>s;
    int n ; cin>>n;
    for(int i = 0 ;i<n;i++)
    {
        int a ; cin>>a;
        s.push(a);
    }
    // find the position of mid elm
    int k = s.size()/2 + 1;
    del_mid(s , k);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0 ;
}