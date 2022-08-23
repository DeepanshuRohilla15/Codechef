#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   int n,m;
   cin>>n>>m;
   int eq = n/m;
   int rem = n%m;
   if(eq%2==0 && rem==0) cout<<"yes"<<"\n";
   else cout<<"no"<<"\n";

}

int main()
{
    //make input output fast
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //test cases
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}