#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
  int n;
  cin>>n;
  for(int i=n; i>=1; i--)
  {
    cout<<i<<" ";
  }
  cout<<"\n";
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