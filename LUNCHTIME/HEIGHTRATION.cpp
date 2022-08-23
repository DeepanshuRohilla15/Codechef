#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int a,b;
    cin>>a>>b;
     if(a>b) cout<< a<<"\n";
     else cout<<b<<"\n";

}

int main()
{
    //make input output fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test cases
    int t=1;
   
    while(t--)
    {
        solve();
    }
    return 0;
}
