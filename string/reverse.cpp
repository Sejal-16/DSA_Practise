/*
question_link:https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
You are given a string s. You need to reverse the string.
Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof*/
#include<bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main(){
    int t ; 
    cin>>t;
    while(t--){
        string s ;
        cin>>s;
        cout<<reverseWord(s)<<endl;
    }
    return 0;
}

string reverseWord(string str){
    
  stack<char>s;
  for(int i = 0 ; i<str.length() ;i++){
      s.push(str[i]);
  }
  string rev = "";
  for(int i = 0 ;i<str.length();i++){
      char a = s.top();
      rev += a;
      s.pop();
  }
  return rev;
}