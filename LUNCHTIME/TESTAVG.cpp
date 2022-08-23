#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
   int a,b,c;
   cin>>a>>b>>c;
   if((a+b)/2 < 35 ) 
   {
    cout<<"fail"<<"\n";
    return;
   }
    if((a+c)/2 < 35 ) 
   {
    cout<<"fail"<<"\n";
    return;
   }
    if((c+b)/2 < 35 ) 
   {
    cout<<"fail"<<"\n";
    return;
   }
   else cout<<"pass"<<"\n";

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