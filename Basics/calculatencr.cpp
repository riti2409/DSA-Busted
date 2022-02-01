#include<bits/stdc++.h>
using namespace std;

int fact (int num){
    int fac=1;
    for(int i=2;i<=num;i++){
        fac*=i;
    }
    return fac;
    
}
int main(){
    int n,r;
    cin>>n>>r;
    int ans=(fact(n)/(fact(r)*fact(n-r)));
    cout<<ans<<endl;
    return 0;
}