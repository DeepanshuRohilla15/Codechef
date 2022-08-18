#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++) cin>>a[i];
	    
	    string str;
	    cin>>str;
	    int ans = INT_MAX;
	    for(int i=0; i<n; i++)
	    {
	        if(str[i]=='0')
	        {
	            ans = min(ans, a[i]);
	        }
	    }
	    cout<<ans<<"\n";
	    
	}
	return 0;
}