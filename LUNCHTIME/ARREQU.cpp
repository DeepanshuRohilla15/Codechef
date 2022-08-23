#include<bits/stdc++.h>
using namespace std;

#define ll long long

void distinctAdjacentElement(int a[], int n)
{
    
    map<int, int> m;
 
  
    for (int i = 0; i < n; ++i)
        m[a[i]]++;
 
    
    int mx = 0;
 

    for (int i = 0; i < n; ++i)
        if (mx < m[a[i]])
            mx = m[a[i]];
 
   
    if (mx > (n + 1) / 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

void solve(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
    cin>>arr[i];
   }
    distinctAdjacentElement(arr, n);
   
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