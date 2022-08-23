#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   int a,b;
   cin>>a>>b;
   if(a==b) cout<<"yes"<<"\n";
   else if(abs(a-b)%2!=0) cout<<"no"<<"\n";
   else
   {
    cout<<"yes"<<"\n";
   }
   
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