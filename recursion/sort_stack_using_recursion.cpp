// sort a stack using recursion

#include<bits/stdc++.h>
using namespace std;


void insert(stack<int> &s , int temp)
{
    if(s.empty() || s.top() <= temp){   // if top elm is less than or equal to temp then insert temp.
        s.push(temp);
        return;
    }
    int val = s.top();      // otherwise pop
    s.pop();
    insert(s , temp);
    s.push(val);
    return;
    

}

void my_sort(stack<int> &s)
{
    //base condition
    if(s.empty()){
        return ;
    }
    // induction
    int temp = s.top();
    s.pop();
    my_sort(s);
    //insert
    insert(s , temp);
    return;
    

    
        
}



int main()
{
    stack<int>s;
    int n ; cin>>n;
    for(int i = 0 ;i<n;i++)
    {
        int a ; cin>>a;
        s.push(a);
    }
    my_sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    return 0;

}