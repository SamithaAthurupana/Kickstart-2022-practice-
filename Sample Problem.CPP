#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        int n, m, ans;
        cin>>n>>m;
        int c[n];
        
        for(int i=0; i<n; i++){
            cin>>c[i];
        }
        
        int sum = 0;
        n = sizeof(c)/sizeof(c[0]);
        for(int i=0; i<n; i++){
            sum=sum+c[i];
        }
        ans=(sum%m);
        cout<<"case #"<<(i+1)<<":"<<" "<<ans<<endl;
    }
    return 0;
}
