// reverse a stack using recursion
#include<bits/stdc++.h>
using namespace std;


void insert(stack<int>&s , int temp){
    if(s.size() == 0){
        s.push(temp);
        return;
    }
    int val = s.top();
    s.pop();
    insert(s , temp);
    s.push(val);
    return;

}

void solve(stack<int>&s , int k){
    if(k == 0){
        return;
    }
    int temp = s.top();
    s.pop();
    // reverse n - 1 elements
    solve(s , k - 1);
    // insert n th elem at proper place at the bottom of stack.
    insert(s , temp);
    
}

int main(){
    stack<int>s;
    int n ; cin>>n;
    for(int i = 0 ;i<n;i++)
    {
        int a ; cin>>a;
        s.push(a);
    }
    int k = s.size();
    solve(s , k);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    return 0;
}