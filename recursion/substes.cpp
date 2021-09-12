/*print all substes of given string.
eg : "ab"| Approah --> Solve by drawing recursive tree.
             ip str = "ab" , op str = ""
                    /                \       --> take decision to include a or not
 op str = "", ip str = "b"           op str = "a" , ip str = "b"    // also reduce input
   /                   \                          /                         \
op str = "", ip="";op="b",ip="" |  op="a" , ip=""  ;            op="ab" , ip = ""
*/
#include<bits/stdc++.h>
using namespace std;

void solve(string ip , string op){
    if(ip.length() == 0){   //if ip becomes null return base condition
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);
    solve(ip , op1);
    solve(ip , op2);
    return;
}

int main(){
    string ip ;
    cout<<"enter string";
    cin>>ip;
    string op = "";
    solve(ip , op);
    return 0;
}