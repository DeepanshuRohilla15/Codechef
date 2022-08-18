#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll res= arr[0];
    for(int i=0; i<n;i++)
    {
        res = __gcd(res,arr[i]);
    }
    cout<<res*(ll)n<<"\n";
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