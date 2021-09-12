//print no.s from n to 1 with recursive function.

#include <iostream>
using namespace std;

void print(int n)
{
    if(n == 1){

        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    print(n - 1);
    
}

int main() {
    int n ;
    cin>>n;
    print(n);
    return 0;
}