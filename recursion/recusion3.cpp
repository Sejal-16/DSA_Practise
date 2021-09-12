// print factorial of a given num
#include <iostream>
using namespace std;

int fact(int n)
{
    if(n == 1){
        return 1 ;
    }
    return n*fact(n - 1);
    
}



int main() {
    int n ;
    cin>>n;
    int s = fact(n);
    cout<<s<<endl;
    return 0;
}